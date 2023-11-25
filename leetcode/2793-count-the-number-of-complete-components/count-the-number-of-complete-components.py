class Solution:
    def countCompleteComponents(self, n: int, edges: List[List[int]]) -> int:
        graph = defaultdict(list)
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        
        def cycle_dfs_check(node, visited):
            connected.add(node)
            for x in graph[node]:
                if x not in visited:
                    visited.add(node)
                    cycle_dfs_check(x, visited)
                
        visited = set()
        ans = 0
        for i in range(n):
            if i not in visited:
                connected = set()
                visited.add(i)
                cycle_dfs_check(i, visited)
                if all(len(graph[node]) == len(connected) - 1 for node in connected):
                    ans += 1

        return ans