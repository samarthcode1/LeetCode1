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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        queue<TreeNode*> q;
        q.push(root);
        int lr=0;
        if(!root){
            return vec;
        }
        while (!q.empty()) {
            int size = q.size();
            vector<int> v(size);
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                int ind;
                if(lr==0){
                    ind=i;
                }
                else{
                    ind=size-i-1;
                }
                v[ind]=node->val;
                if(node->left){
                    q.push({node->left});
                }
                if(node->right){
                    q.push({node->right});
                }
            }
            if(lr==0){
                lr=1;
            }
            else{
                lr=0;
            }
            vec.push_back(v);
        }
        return vec;
    }
};