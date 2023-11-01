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
    void dfs(TreeNode* root,unordered_map<int, int>& mp){
        if(root==NULL){
            return;
        }
        mp[root->val]++;
        dfs(root->left,mp);
        dfs(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        vector<int>v;
        dfs(root,mp);
        int freq=0;
        for(auto i:mp){
            freq=max(freq,i.second);
        }
        for(auto i:mp){
            if(i.second==freq){
                v.push_back(i.first);
            }
        }
        return v;

    }
};