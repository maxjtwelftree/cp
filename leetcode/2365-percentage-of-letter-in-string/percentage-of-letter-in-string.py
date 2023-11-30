class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        n, x, cnt = len(s), len(letter), 0
        for i in range(n):
            for j in range(x):
                if s[i] == letter[j]:
                    cnt += 1
        
        return int(cnt/n * 100)