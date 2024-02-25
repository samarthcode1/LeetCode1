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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==NULL){
        //     return NULL;
        // }
        // int count=0;
        // ListNode* p1=head;
        // while(p1!=NULL){
        //     count++;
        //     p1=p1->next;
        // }
        // if(count==n){
        //     head=head->next;
        //     return head;
        // }
        // p1=head;
        // n=count-n-1;
        // count=0;
        // while(p1!=NULL){
        //     if(count==n){
        //         p1->next=p1->next->next;
        //     }
        //     count++;
        //     p1=p1->next;
        // }
        // return head;
        if(head==NULL){
            return NULL;
        }
        int count=0;
        ListNode* p1=head;
        while(p1!=NULL){
            count++;
            p1=p1->next;
        }
        if(count==n){
            head=head->next;
            return head;
        }

        p1=head;
        n=count-n-1;
        count=0;
        while(p1!=NULL){
            if(count==n){
                p1->next=p1->next->next;
            }
            count++;
            p1=p1->next;
        }
        return head;
    }
};