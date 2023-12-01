class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        check = [1] * n
        for i in range(1, n):
            if ratings[i-1] < ratings[i]:
                check[i] = check[i-1] + 1
        for i in range(n-2, -1, -1):
            if ratings[i] > ratings[i+1]:
                check[i] = max(check[i], check[i+1] + 1)
        return sum(check)         