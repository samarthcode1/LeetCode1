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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // vector<int> v;
        vector<int> ind;
        ListNode* temp = head;
        ListNode* prev = temp;
        temp = temp->next;
        int i = 1;
        while (temp) {
            if (temp->next) {
                if ((temp->val > prev->val && temp->val > temp->next->val) ||
                    (temp->val < prev->val && temp->val < temp->next->val)) {
                    ind.push_back(i);
                }
            }
            prev=temp;
            temp=temp->next;
            i++;
        }
        int n=ind.size();
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            if(ind[i]-ind[i-1]<mini){
                mini=ind[i]-ind[i-1];
            }
        }
        if(n<=1){
            return {-1,-1};
        }
        int maxi=abs(ind[0]-ind[n-1]);
        return {mini,maxi};

    }
};