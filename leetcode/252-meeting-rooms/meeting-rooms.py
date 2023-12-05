class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        new_list = sorted(intervals)
        print(new_list)
        for i in range(1, len(new_list)):
            if new_list[i-1][1] > new_list[i][0]:
                print(new_list[i-1][1])
                print(new_list[i][0])
                return False
        
        print(new_list)
        return True
        