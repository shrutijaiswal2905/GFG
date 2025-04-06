class Solution:
    
    def topoSort(self, V, edges):
        # Code here
        adj = [[] for _ in range(V)]
        for u, v in edges: adj[u].append(v)
        vis, res = [0]*V, []
        def dfs(n):
            vis[n] = 1
            for nei in adj[n]:
                if not vis[nei]: dfs(nei)
            res.append(n)
        for i in range(V):
            if not vis[i]: dfs(i)
        return res[::-1]



#{ 
 # Driver Code Starts
# Driver Program

import sys

sys.setrecursionlimit(10**6)


def check(graph, N, res):
    if N != len(res):
        return False
    map = [0] * N
    for i in range(N):
        map[res[i]] = i
    for i in range(N):
        for v in graph[i]:
            if map[i] > map[v]:
                return False
    return True


def main():
    tc = int(input())
    for _ in range(tc):
        V = int(input())
        E = int(input())
        edges = []
        adj = [[] for i in range(V)]
        for _ in range(E):
            u, v = map(int, input().split())
            edges.append((u, v))
            adj[u].append(v)

        obj = Solution()
        res = obj.topoSort(V, edges)

        if check(adj, V, res):
            print("true")
        else:
            print("false")
        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends