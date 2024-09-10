class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == NULL)
            return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr) {
            int gcdValue = gcd(prev->val, curr->val);
            ListNode* gcdNode = new ListNode(gcdValue);
            prev->next = gcdNode;
            gcdNode->next = curr;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};