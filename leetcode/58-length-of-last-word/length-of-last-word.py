class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        new_string, cnt = s[::-1], 0
        for i in range(len(new_string)):
            if new_string[i] != ' ':
                cnt += 1
            elif cnt > 0:
                return cnt 
        return cnt