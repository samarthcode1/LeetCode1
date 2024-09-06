class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> set(nums.begin(), nums.end());

        while (head != nullptr && set.count(head->val) > 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        if (head == NULL) {
            return NULL;
        }

        ListNode* current = head;
        while (current->next != nullptr) {
            if (set.contains(current->next->val)) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};