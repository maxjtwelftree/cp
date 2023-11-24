class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        ans = 0
        piles.sort() # need to sort for every three
        queue = deque(piles)

        while queue:
            queue.pop()
            ans += queue.pop()
            queue.popleft()
        
        return ans
            



        