class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        for x in sorted(asteroids):
            if mass < x:
                return False
            mass += x
        return True