/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     if(node->val==temp->val){
        //         temp->next=temp->next->next;
        //     }
        //     temp=temp->next;
        // }
        // return head;
        ListNode *nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        nextNode->next = nullptr;
        delete(nextNode);
    }
};

