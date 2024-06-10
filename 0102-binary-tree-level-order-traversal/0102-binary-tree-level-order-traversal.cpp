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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if (!root) {
            return vec;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});
        while (!q.empty()) {
            int size = q.size();
            vector<int> v;
            for (int j = 0; j < size; j++) {
                auto i = q.front();
                q.pop();
                TreeNode* node = i.first;
                v.push_back(i.second);
                if (node->left) {
                    q.push({node->left, node->left->val});
                }
                if (node->right) {
                    q.push({node->right, node->right->val});
                }
            }
            vec.push_back(v);
        }
        return vec;
    }
};