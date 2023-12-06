class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        new_asteroids = sorted(asteroids)
        for i in range(len(new_asteroids)):
            if mass < new_asteroids[i]:
                return False
            mass += new_asteroids[i]
        return True