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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        int n=descriptions.size();
        int root=-1;
        unordered_map<int,int>mp;
        unordered_map<int,TreeNode*>node;
        for(auto& i:descriptions){
            int x=i[0],y=i[1],l=i[2];
            if(node.count(x)==0){
                node[x]=new TreeNode(x);
                if(mp.count(x)==0){
                    root=x;
                }
            }
            if(node.count(y)==0){
                node[y]=new TreeNode(y);
            }
            mp[y]=x;
            if(l!=0){
                node[x]->left=node[y];
            }
            else{
                node[x]->right=node[y];
            }
        }
        while(mp.count(root)){
            root=mp[root];
        }
        return node[root];
    }
};