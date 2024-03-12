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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=new ListNode(0,head);
        ListNode* curr=temp;
        unordered_map<int,ListNode*>mp;
        mp[0]=temp;
        int totalSum=0;
        while(curr){
            totalSum+=curr->val;
            mp[totalSum]=curr;
            curr=curr->next;
        }
        totalSum=0;
        curr=temp;
        while(curr){
            totalSum+=curr->val;
            curr->next=mp[totalSum]->next;
            curr=curr->next;
        }
        return temp->next;

        // int currSum=0;
        // while(temp){
        //     if(currSum+temp->val==0){
        //         head=temp->next;    
        //     }
        //     totalSum+=temp->val;
        //     currSum=temp->val;
        //     if(totalSum==0){

        //     }
        //     temp=temp->next;

        // }
    }
};