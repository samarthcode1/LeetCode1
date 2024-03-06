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
    bool hasCycle(ListNode *head) {
        ListNode* p1=head;
        ListNode* p2=head;
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        while(p2 && p2->next!=NULL){
            p1=p1->next;
            p2=p2->next->next;
            if(p1==p2){
                return true;
            }   
        }
        
        return false;
    }
};