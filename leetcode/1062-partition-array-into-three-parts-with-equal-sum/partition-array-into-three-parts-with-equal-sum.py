class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        checker = sum(arr)
        cnt, tracker = 0, 0
        another = checker / 3
        if checker % 3 != 0:
            return False
        for i in range(len(arr)):
            tracker += arr[i]
            if tracker == another:
                tracker = 0
                cnt += 1

        return True if cnt >= 3 else False