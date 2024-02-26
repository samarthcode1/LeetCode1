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
            return nullptr;
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
    // void reverse(ListNode* head){
    //     if(!head || !head->next){
    //         return ;
    //     }
    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
    //     ListNode* nxt = NULL;
    //     while(curr){
    //         nxt = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = nxt;
    //     }
    // }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&& fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverseList(slow);
        ListNode* temp=head;
        while(slow){
            if(temp->val!=slow->val){
                return false;
            }
            temp=temp->next;
            slow=slow->next;
        }
        // ListNode* temp=head;
        // ListNode* temp=reverseList(head);
        // while(head){
        //     cout<<head->val<<" ";
        //     head=head->next;
        // }
        // cout<<endl;
        // while(temp){
        //     cout<<temp->val<<" ";
        //     temp=temp->next;
        // }
        // while(head){
        //     if(head->val!=head2->val){
        //         return false;
        //     }
        //     head=head->next;
        //     head2=head2->next;
        // }
        return true;
    }
};