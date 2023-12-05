class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        new_string = s[::-1]
        cnt = 0

        print(new_string)
        print(s[::-1])
        print(new_string[0])
        for i in range(len(new_string)):
            if new_string[i] != ' ':
                cnt += 1
            elif cnt > 0:
                return cnt 
        return cnt
        