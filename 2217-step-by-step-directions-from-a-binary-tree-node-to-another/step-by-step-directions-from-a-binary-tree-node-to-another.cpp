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
    int find(TreeNode* node, int target, string& path) {
        if (node == nullptr) {
            return 0;
        }
        if (node->val == target) {
            return 1;
        }
        path += "L";
        // cout << path << endl;

        if (find(node->left, target, path)) {
            return 1;
        }
        // cout << path << endl;
        path.pop_back();
        // cout << path << endl;
        path += "R";
        // cout << path << endl;

        if (find(node->right, target, path)) {
            return 1;
        }
        path.pop_back();
        // cout << path << endl;

        return 0;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string spath, dpath;
        // cout<<"left\n";
        find(root, startValue, spath);
        // cout<<"right\n";
        find(root, destValue, dpath);
        string dir;
        int common = 0;
        while (common < spath.size() && common < dpath.size() &&
               spath[common] == dpath[common]) {
            common++;
        }
        for (int i = 0; i < spath.size() - common; i++) {
            dir += "U";
        }
        cout<<dir<<endl;
        cout<<spath<<endl;
        cout<<dpath<<endl;
        for (int i = common; i < dpath.length(); i++) {
            dir += dpath[i];
        }
        return dir;
    }
};
