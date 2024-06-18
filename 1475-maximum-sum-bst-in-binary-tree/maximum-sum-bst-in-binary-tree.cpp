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
    int sum=INT_MIN;
    // void inorder(TreeNode* root, vector<int>& v) {
    //     if (!root) {
    //         return;
    //     }
    //     inorder(root->left, v);
    //     v.push_back(root->val);
    //     inorder(root->right, v);
    // }
    // bool isValidBST(TreeNode* root) {
    //     vector<int> v;
    //     inorder(root, v);
    //     for (auto i : v) {
    //         cout << i << " ";
    //     }
    //     for (int i = 1; i < v.size(); i++) {
    //         if (v[i - 1] >= v[i]) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    vector<int> maxsum(TreeNode* root){
        if(!root){
            return {INT_MAX,INT_MIN,0};
        }
        vector<int>lefts=maxsum(root->left);
        vector<int>rights=maxsum(root->right);
        if(lefts[1]>=root->val || rights[0]<=root->val){
            return {INT_MIN,INT_MAX,0};
        }
        int res=lefts[2]+rights[2]+root->val;
        sum=max(sum,res);
        return {min(root->val,lefts[0]),max(rights[1],root->val),res};
    }
    int maxSumBST(TreeNode* root) {
        vector<int>ans=maxsum(root);
        if(sum<0){
            return 0;
        }
        return sum;

    }
};