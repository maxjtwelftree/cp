class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        new_ass, tracker = sorted(asteroids), mass
        for i in range(len(new_ass)):
            if tracker < new_ass[i]:
                return False
            tracker += new_ass[i]
        return True