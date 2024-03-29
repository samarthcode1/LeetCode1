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
    bool isEvenOddTree(TreeNode* root) {
        // int level=0;
        queue<TreeNode*>q;
        TreeNode* temp=root;
        q.push(temp);
        bool level=true;
        while(!q.empty()){
            int n=q.size();
            int prev=INT_MIN;
            if(!level){
                prev=INT_MAX;
            }
            while(n>0){
                temp=q.front();
                q.pop();
                n--;
                if(level && (temp->val%2==0 || temp->val<=prev) || (!level &&(temp->val%2!=0 || temp->val>=prev))){
                    return false;
                }
                prev=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            level=!level;
        }
        return true;
    }
};