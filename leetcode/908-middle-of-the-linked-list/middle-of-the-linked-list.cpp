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
    ListNode* middleNode(ListNode* head) {
        // we need to check if there is even a node at head
        // if not a NULL dosent have a next so it would errors
        if (head == NULL) {
            return 0;
        }
        // create variable to track nodes we have
        int count = 0;

        // iterator pointer
        ListNode* temp = head;
        while (temp != NULL) {
            // incrementing count bc we have seen value
            count++;
            // move to next node
            temp = temp->next;
        }
        int mid = count/2;
        temp = head;
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }
        return temp;
    }
};