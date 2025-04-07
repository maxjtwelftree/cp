class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        while (slow) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        int maxSum = 0;
        while (prev) {
            maxSum = max(maxSum, head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }

        return maxSum;
    }
};
