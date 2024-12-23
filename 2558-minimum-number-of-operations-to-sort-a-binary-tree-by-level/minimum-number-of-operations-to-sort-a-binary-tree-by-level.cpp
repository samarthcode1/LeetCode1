/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void swap(vector<int>& arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    int minSwaps(vector<int> arr) {
        int N = arr.size();
        int ans = 0;
        vector<int> temp = arr;
        unordered_map<int, int> h;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < N; i++) {
            h[arr[i]] = i;
        }
        for (int i = 0; i < N; i++) {
            if (arr[i] != temp[i]) {
                ans++;
                int init = arr[i];
                swap(arr, i, h[temp[i]]);
                h[init] = h[temp[i]];
                h[temp[i]] = i;
            }
        }
        return ans;
    }

    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int totalSwap=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                v[i]=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            totalSwap+=minSwaps(v);
        }
        return totalSwap;
    }
};