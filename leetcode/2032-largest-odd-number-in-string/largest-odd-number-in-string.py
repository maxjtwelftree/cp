class Solution:
    def largestOddNumber(self, num: str) -> str:
        new_list, n, ok = [int(digit) for digit in num], len(num), [int(digit) for digit in num[-1]]
        if new_list[n-1] % 2 == 1:
            return num
        
        for i in range(n - 1, -1, -1):
            if new_list[i] % 2 == 1:
                return num[:i + 1]
        return ""
        