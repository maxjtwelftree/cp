class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;

        while (current != nullptr) {
            next = current->next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        head = prev;
        return head;
    }
};