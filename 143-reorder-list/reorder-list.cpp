class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next != NULL) {
            fast = fast->next->next;
            slow=slow->next;
        }
        ListNode *head2=slow->next;
        slow->next = NULL;   

        ListNode* forward = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head2;

        while (curr) {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }

        head2 = prev;
        while (head2) {
            ListNode *ptr1=head->next;
            ListNode *ptr2=head2->next;
            
            head->next=head2;
            head2->next=ptr1;
            head=ptr1;
            head2=ptr2;
        }
    }
};