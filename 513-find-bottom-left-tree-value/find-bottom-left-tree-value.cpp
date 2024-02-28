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
    // int maxi=0;
    // int dfs(TreeNode* root,int& count){
    //     if(!root){
    //         return 0;
    //     }
    //     int left=dfs(root->left,count);
    //     int left=dfs(root->right,count);
    //     maxi=max(maxi,left->val);


    // }
    int findBottomLeftValue(TreeNode* root) {
        // int bottomleft=0;
        // dfs(root,count);
        // return count;
        queue<TreeNode*>queue;
        TreeNode* temp=root;
        queue.push(temp);
        while(!queue.empty()){
            temp=queue.front();
            queue.pop();
            if(temp->right){
                queue.push(temp->right);
            }
            if(temp->left){
                queue.push(temp->left);
            }
        }
        return temp->val;
    }
};