class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        cnt = 0

        for i in words:
            for ch in i:
                if i.count(ch) > chars.count(ch):
                    break
            else:
                cnt += len(i)
        
        return cnt