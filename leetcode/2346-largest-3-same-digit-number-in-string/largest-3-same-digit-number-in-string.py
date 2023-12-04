class Solution:
    def largestGoodInteger(self, num: str) -> str:
        new, checker = "", -9999999
        

        for i in range(2, len(num)):
            if num[i-1] == num[i-2] == num[i]:
                if int(num[i]) > checker:
                    new = num[i] * 3
                    checker = int(num[i])
        
        return new