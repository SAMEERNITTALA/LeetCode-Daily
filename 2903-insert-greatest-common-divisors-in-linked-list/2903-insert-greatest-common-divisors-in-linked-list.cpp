class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* node = head;
        while (node != nullptr && node->next != nullptr) {
            int x = node->val;
            int y = node->next->val;

            int gcdValue = gcd(x, y);

            ListNode* gcdNode = new ListNode(gcdValue);

            gcdNode->next = node->next;
            node->next = gcdNode;

            node = gcdNode->next;
        }
        return head;
    }
};
