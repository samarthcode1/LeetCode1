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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* h1=head;
        int val=n/2;
        if(n%2!=0){
            while(val!=0){
                h1=h1->next;
                val--;
            }
        }
        else{
            while(val!=0){
                h1=h1->next;
                val--;
            }
        }
        return h1;
    }
};