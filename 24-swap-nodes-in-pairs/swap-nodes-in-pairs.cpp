/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *neaxt) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = head->next;
        head->next = newHead->next;
        newHead->next = head;
        if(head ->next == NULL){
            return newHead;
        }
        
        ListNode* curr = head->next;
        ListNode* nxt = curr->next;
        ListNode* prev = head;
        while(curr != NULL && nxt != NULL){
            curr->next = nxt->next;
            nxt->next = curr;
            prev->next = nxt;
            prev = curr;
            curr = curr->next;
            if(curr == NULL){
                break;
            }
            nxt = curr->next;
        }
        return newHead;
    }
};