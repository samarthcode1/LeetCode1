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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            int mini=q.front().second;
            int left,right;
            for(int i=0;i<size;i++){
                int temp=q.front().second-mini;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0){
                    left=temp;
                }
                if(i==size-1){
                    right=temp;
                }
                if(node->left){
                    q.push({node->left,2*(long long)temp+1});
                }
                if(node->right){
                    q.push({node->right,2*(long long)temp+2});
                }
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};