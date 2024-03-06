class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * f = head;
        ListNode * s = head;
        while (f && f->next != NULL) {
            s = s->next;
            f = f->next->next;
            if (s == f) {
                return true;
            }
        }
        return false;
    }
};