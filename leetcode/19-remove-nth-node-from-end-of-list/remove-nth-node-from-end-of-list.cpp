class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* temp = head;
	int length = 0, i = 1;
	while (temp) {
        // finding the length of linked list
        temp = temp -> next;
        length++;
    }
	if (length == n) {
        // if head itself is to be deleted, just return head 
        return head -> next;  
    }        
	for (temp = head; i < length - n; i++) {
        // tempate first len-n nodes
        temp = temp -> next; 
    }
    // remove the nth node from the end
    temp -> next = temp -> next -> next;     
	return head;
    }
};