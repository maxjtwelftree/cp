class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        current, starting = 0, 0

        for i in range(len(gas)):
            current += gas[i] - cost[i]
        
            if current < 0:
                starting = i + 1
                current = 0
            
        return starting if sum(gas) >= sum(cost) else -1
