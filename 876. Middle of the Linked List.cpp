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
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
            
        }
        int size=length;
        int middle=length/2;
        while(head!=NULL){
            if((size%2==0 && length==middle)||(size%2!=0 && length-1==middle)){
                break;
            }
            head=head->next;
            length--;
        }
        return head;
    }
};