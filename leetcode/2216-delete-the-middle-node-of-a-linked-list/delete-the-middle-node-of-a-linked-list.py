# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        slow = dummy 
        fast = dummy 

        # we are literally just using t and h to find the middle and then calling delete on the slow node by assigning it to a nullptr 

        while fast.next and fast.next.next:
            fast = fast.next.next # move this twice the speed
            slow = slow.next

        # this will delete, due to pointing it to a null value 
        slow.next = slow.next.next
        return dummy.next # else this will return a 0 before the list 
        