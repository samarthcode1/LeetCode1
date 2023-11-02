/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
    // void postord(TreeNode* root,int sum){
        // if(!root){
        //     return;
        // }
        // sum+=root->val;
        // dfs(root->left);
        // dfs(root->right);
    // } 
    pair<int,int> postord(TreeNode* root){
        if(!root){
            return {0,0};
        }
        pair<int,int> left = postord(root->left);
        pair<int,int> right = postord(root->right);
        int sum = left.first + right.first + root->val;
        int num = left.second + right.second + 1;
        if(sum/num == root->val){
            // cout<<"Val: "<<root->val<<endl;
            count++;
        }
        return {sum, num};
    }
    int averageOfSubtree(TreeNode* root) {
        postord(root);
        return count;
    }
};