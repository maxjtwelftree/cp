class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) {
            return;
        }
        ListNode* pointed = head;
        while (pointed->next->next != NULL) {
            pointed = pointed->next;
        }
        pointed->next->next = head->next;
        head->next = pointed->next;
        pointed->next = NULL;
        reorderList(head->next->next);
    }
};