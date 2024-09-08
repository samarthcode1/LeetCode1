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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            count++;
        }
        int partSize=count/k;
        int extraNode=count%k;
        vector<ListNode*> ans;
        ListNode* current=head,*prev=NULL;
        while(head){
            int eachpartSize=partSize;
            ans.push_back(current);
            while(eachpartSize>0){
                prev=current;
                current=current->next;
                eachpartSize--;
            }
            if(extraNode!=0 && current!=NULL){
                extraNode--;
                prev=current;
                current=current->next;
            }
            if(prev!=NULL){
                head=current;
                prev->next=NULL;
            }
        }
        while(ans.size()!=k){
            ans.push_back(NULL);
        }
        return ans;
    }
};