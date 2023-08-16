class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int &n) {
        if (head == nullptr) {
            return nullptr;
        }

        int count = 0;
        ListNode* current = head;
        while (current != nullptr) {
            ++count;
            current = current->next;
        }

        int deleted = count - n + 1;

        if (deleted <= 0) {
            // Invalid 'n' value, return the original list.
            return head;
        }

        if (deleted == 1) {
            // If the first ListNode is to be deleted, update the head and return.
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* del_prev = head;
        for (int i = 1; i < deleted - 1 && del_prev != nullptr; ++i) {
            del_prev = del_prev->next;
        }

        if (del_prev == nullptr || del_prev->next == nullptr) {
            // 'n' is out of bounds, return the original list.
            return head;
        }

        ListNode* del = del_prev->next;
        del_prev->next = del->next;
        delete del;

        return head;
    }
};
