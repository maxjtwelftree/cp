class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        new_ass = sorted(asteroids)
        print(new_ass)
        tracker = mass
        print(tracker)
        for i in range(len(new_ass)):
            print(tracker)
            if tracker < new_ass[i]:
                return False
            tracker += new_ass[i]

        return True

        