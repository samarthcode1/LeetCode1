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

    //     ListNode* temp= new ListNode(-1);
        // ListNode* p1=list1;
        // ListNode* p2=list2;
    //     ListNode* p3=temp;

    //     while(p1!=NULL && p2!=NULL){
    //         if(p1->val<p2->val){
    //             p3->next=p1;
    //             p1=p1->next;
    //         }

    //         else{
    //             p3->next=p2;
    //             p2=p2->next;
    //         }
           
    //        p3=p3->next;
    //     }

    //     while(p1!=NULL){
    //         p3->next=p1;
    //         p1=p1->next;
    //         p3=p3->next;

    //     }

    //     while(p2!=NULL){
    //         p3->next=p2;
    //         p2=p2->next;
    //         p3=p3->next;

    //     }

    //   return temp->next;
         if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }

        int data1 = list1->val;
        int data2 = list2->val;

        ListNode* ans = NULL;
        if(data1>data2){
            ans = list2;
            // ans->next = NULL;
            list2 = list2->next;
        }else{
            ans = list1;
            // ans->next = NULL;
            list1 = list1->next;
        }

        ListNode* itr = ans;

        while(list1 && list2){
            int data1 = list1->val;
            int data2 = list2->val;
            if(data1>data2){
                itr->next = list2;
                list2 = list2->next;
            }else{
                itr->next = list1;
                list1 = list1->next;
            }
            itr = itr->next;
        }

        while(list1){
            itr->next = list1;
            list1 = list1->next;
            itr = itr->next;
        }

        while(list2){
            itr->next = list2;
            list2 = list2->next;
            itr = itr->next;
        }

        itr->next = NULL;
        return ans; 
    }
};