class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        hashing = collections.defaultdict(int)
        cnt = 0

        for i in range(len(time)):
            if time[i] % 60 == 0:
                cnt += hashing[0]
            else:
                cnt += hashing[60 - time[i] % 60]
            hashing[time[i] % 60] += 1
            
        return cnt