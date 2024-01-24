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
    int num=0;
    bool isPalindrome(unordered_map<int,int>&mp){
        bool oddCheck=false;
        for(auto i:mp){
            if(i.second%2){
                if(oddCheck){
                    return false;
                }
                oddCheck=true;
            }
        }
        return true;
    }
    void func(unordered_map<int,int>&mp,TreeNode* root){
        if(!root->left && !root->right){
            if(isPalindrome(mp)){
                num++;
            }
        }
        if(root->left){
            mp[root->left->val]++;
            func(mp,root->left);
            mp[root->left->val]--;
        }
        if(root->right){
            mp[root->right->val]++;
            func(mp,root->right);
            mp[root->right->val]--;
        
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int>mp;
        mp[root->val]++;
        func(mp,root);
        return num;

    }
};