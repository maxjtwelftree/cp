class Solution:
    def findPeaks(self, mountain: List[int]) -> List[int]:
        ans = []

        for i in range(2, len(mountain)):
            if mountain[i-1] > mountain[i] and mountain[i-2] < mountain[i-1]:
                ans.append(i-1)
        
        return ans 
        