# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = current = ListNode()
        values = []
        while list1:
            values.append(list1.val)
            list1 = list1.next
            
        while list2:
            values.append(list2.val)
            list2 = list2.next

        for val in sorted(values):
            current.next = ListNode(val)
            current = current.next

        return head.next
        