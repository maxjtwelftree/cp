class Solution:
    def checkString(self, s: str) -> bool:
        # abab - > false
        # aabb - > true
        checker = ''.join(sorted(s))
        return s == checker

