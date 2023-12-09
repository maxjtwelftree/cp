class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        checker, cnt = Counter(s).items(), 0
        print(checker)
        for i, j in checker:
            if len(s) < k:
                return False
            if j % 2 == 1:
                cnt += 1
        
        if cnt > k:
            return False
        
        return True
        