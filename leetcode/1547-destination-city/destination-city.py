class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        checker = dict(paths)

        for i in checker.values():
            if i not in checker.keys():
                return i 