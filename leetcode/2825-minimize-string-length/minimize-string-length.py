class Solution:
    def minimizedStringLength(self, s: str) -> int:
        my_set = set()
        for c in s:
            my_set.add(c)
        return len(my_set)        