class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        average = int(len(arr) / 4)
        print(average)

        ans = Counter(arr).items()
        print(ans)

        
        for x, y in ans:
            #if len()
            if y > average:
                return x
                print(x)
                print(y)
        
        return 0

        