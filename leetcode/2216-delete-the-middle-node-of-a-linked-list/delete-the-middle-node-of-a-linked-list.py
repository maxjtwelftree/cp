class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        slow = dummy 
        fast = dummy 


        while fast.next and fast.next.next:
            fast = fast.next.next
            slow = slow.next

        slow.next = slow.next.next
        return dummy.next 
        