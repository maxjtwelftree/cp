class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        # [2,7,11,15]
        # two pointers, just cannot use extra space

        # iterate up the array and just check, whether i + 1

        i = 0
        j = len(numbers) - 1

        # [2,3,4]
        # i    j = answer, 

        # tracking target = target - i
        while i < j:
            new_target = target - numbers[i]
            if numbers[j] == new_target:
                return i + 1, j + 1
            elif numbers[j] > new_target:
                j -= 1
            else:
                i += 1
        return i, j

