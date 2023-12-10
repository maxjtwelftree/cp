class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        graph = defaultdict(list)

        for i in range(len(isConnected)):
            for j in range(len(isConnected[i])):
                if isConnected[i][j] == 1:
                    graph[i].append(j)
                    graph[j].append(i)
        
        visits = [False] * len(isConnected)

        def dfs(first):  
            for x in graph[first]:
                if visits[x] == False: 
                    visits[x] = True
                    dfs(x)

        num_provinces = 0
        for i in range(len(isConnected)):
            if visits[i] == False:
                num_provinces += 1
                visits[i] = True
                dfs(i)

        return num_provinces