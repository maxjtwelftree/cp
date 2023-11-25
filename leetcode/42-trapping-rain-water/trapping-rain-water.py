class Solution:
    def trap(self, height: List[int]) -> int:
        trapped_water = 0
        right_max, left_max, first_case = 0, 0, 0
        list_of_left, list_of_right = [0] * len(height), [0] * len(height)

        left_max = height[0]
        for i in range(len(height)):
            left_max = max(left_max, height[i])
            list_of_left[i] = left_max

        right_max = height[-1]
        for i in range(len(height) - 1, -1, -1):
            right_max = max(right_max, height[i])
            list_of_right[i] = right_max

        for i in range(len(height)):
            trapped_water += min(list_of_left[i], list_of_right[i]) - height[i]
        
        return trapped_water


        