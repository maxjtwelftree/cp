class Solution:
    def minProcessingTime(self, processorTime: List[int], tasks: List[int]) -> int:
        processorTime.sort()
        tasks.sort()
        ans, index = 0, 0
        for i in processorTime:
            ans = max(ans, i + max(tasks[-4:]))
            tasks = tasks[:-4]
        return ans
        