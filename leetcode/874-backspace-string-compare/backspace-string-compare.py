class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def checker(s):
            ans = []

            for i in s:
                if i != '#':
                    ans.append(i)
                elif ans:
                    ans.pop()
            return "".join(ans)
        
        return checker(s) ==  checker(t)
        