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
    string ans="";
    void dfs(TreeNode* root,string str){
        if(!root){
            return;
        }
        str=char('a'+root->val)+str;
        if(!root->left && !root->right){
            if(ans=="" || str<ans){
                ans=str;
                cout<<ans<<endl;
            }
        }
        if(root->left){
            dfs(root->left,str);
        }
        if(root->right){
            dfs(root->right,str);
        }

    }
    string smallestFromLeaf(TreeNode* root) {
        // string ans="";
        dfs(root,"");
        return ans;
    }
};