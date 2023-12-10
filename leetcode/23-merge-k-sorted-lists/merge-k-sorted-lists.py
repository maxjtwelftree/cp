# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        head = temp = ListNode()

        answer = []

        for i in lists:
            while i != None:
                answer.append(i.val)
                i = i.next
        print(sorted(answer))

        for val in sorted(answer):
            temp.next = ListNode()
            temp = temp.next
            temp.val = val
            print(temp)

        return head.next
