class Solution:
    def repeatedCharacter(self, s: str) -> str:
        mys = set()

        for c in s:
            if c in mys:
                return c
            mys.add(c)
        
        return 'x'
        