class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        # nums = []
        # in one move, i can pick an index > 0 and less than n
        # in that move i increment by 1
        # need to find the moves to make all values unique 


        # [1,2,2] 
        # just a count?

        # sort an array and when an element > 1 frequency, i increment my cnt?

        # [3,2,1,2,1,7]
        # [1,1,2,2,3,7] if an element has a frequency of 2 it means that we need to increment it till till it doesnt equal its next num and then we can just cnt the 
        # amount of times we are incrementing it 
        # == [1,2,3,4,5,7]

        cnt, n = 0, len(nums)
        nums.sort()

        for i in range(1, n):
            # [1,1,2,2,3,7]
            # [1,2,3,4,5,7]
            if nums[i-1] >= nums[i]:
                # [1,1,2,2,3,7]
                #    
                checker = nums[i-1] + 1 - nums[i]
                cnt += checker
                nums[i] = nums[i-1] + 1
        
        return cnt 



        