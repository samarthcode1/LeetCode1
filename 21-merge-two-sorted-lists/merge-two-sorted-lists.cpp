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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        ListNode* r =NULL;
        ListNode* head = NULL;    
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        while(t1!=NULL &&t2!=NULL){
            if(t1->val <= t2->val){
                if(r==NULL)
                {
                    r = t1;
                    head =r;
                }
                else
                {
                    r->next = t1;
                    r = t1;
                }
                t1=t1->next;
            }    
            else{
               // ListNode* temp = ListNode(temp2->val);
                if(r==NULL)
                {
                    r = t2;
                    head =r;
                }
                else
                {
                    r->next = t2;
                    r = t2;
                }
                t2=t2->next;
                
            }
            
                
        }
        if(t1!=NULL){
           // ListNode* temp = ListNode(temp1->val);
            r->next = t1;
            
        }
        if(t2!=NULL){
            //ListNode* temp = ListNode(temp2->val);
            r->next = t2;
        }
        return head;
    }
    
};