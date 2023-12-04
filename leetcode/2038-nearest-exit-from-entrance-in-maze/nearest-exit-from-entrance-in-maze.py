class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        n, m = len(maze), len(maze[0])
        x, y = entrance
        queue = deque([(entrance[0], entrance[1], 0)]) 
        maze[entrance[0]][entrance[1]] = '-' 
        visited = set([(x,y)])

        while queue:
            x, y, steps = queue.popleft()
            if steps != 0 and (x + 1 == n or x - 1 == -1 or y + 1 == m or y - 1 == -1):
                return steps
            for xx, yy in [(0,1),(1,0),(0,-1),(-1,0)]:
                xxx, yyy = x + xx, y + yy
                if n > xxx >= 0 <= yyy < m and maze[xxx][yyy] == '.' and (xxx, yyy) not in visited:
                    visited.add((xxx, yyy))
                    queue.append((xxx, yyy, steps+1))
        
        return -1