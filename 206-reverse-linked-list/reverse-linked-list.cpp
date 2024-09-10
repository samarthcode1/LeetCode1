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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p1=NULL;
        ListNode* p2=NULL;
        if(head==NULL){
            return NULL;
        }
        while(head!=NULL){
            p2=p1;
            p1=head;
            head=head->next;
            p1->next=p2;
        }
        head=p2;
        return p1;
    }

};