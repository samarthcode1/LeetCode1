/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* constTree(ListNode* head,ListNode* last){
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==last){
            return NULL;
        }
        while(fast!=last && fast->next!=last){
            slow=slow->next;
            fast=fast->next->next;
        }
        TreeNode* root=new TreeNode(slow->val);
        root->left=constTree(head,slow);
        root->right=constTree(slow->next,last);
        return root;

    }
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root=constTree(head,NULL);
        return root;
    }
};