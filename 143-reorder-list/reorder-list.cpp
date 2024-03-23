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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* p=head;
        while(p !=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        // reverse(v.begin(),v.end());
        int l=0;
        int r=v.size()-1;
        ListNode* it=head;
        while(l<=r){
            it->val=v[l];
            it=it->next;
            if(it==NULL){
                break;
            }
            it->val=v[r];
            it=it->next;
            l++;
            r--;
        }

    }
};