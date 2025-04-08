//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int timer;
    bool bridgeFound;

    void dfs(int node, int parent, vector<int> &tin, vector<int> &low, vector<vector<int>> &adj, int c, int d) {
        tin[node] = low[node] = timer++;
        
        for (int neighbor : adj[node]) {
            if (neighbor == parent) continue;
            
            if (tin[neighbor] == -1) {
                dfs(neighbor, node, tin, low, adj, c, d);
                low[node] = min(low[node], low[neighbor]);
                
                // Check if (node, neighbor) is a bridge
                if (low[neighbor] > tin[node]) {
                    if ((node == c && neighbor == d) || (node == d && neighbor == c)) {
                        bridgeFound = true;
                    }
                }
            } else {
                low[node] = min(low[node], tin[neighbor]);
            }
        }
    }

    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // Build adjacency list
        vector<vector<int>> adj(V);
        for (auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> tin(V, -1);
        vector<int> low(V, -1);
        timer = 0;
        bridgeFound = false;

        // Run DFS from every unvisited node
        for (int i = 0; i < V; i++) {
            if (tin[i] == -1) {
                dfs(i, -1, tin, low, adj, c, d);
            }
        }

        return bridgeFound;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        vector<vector<int>> edges(E);
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i - 1].push_back(u);
            edges[i - 1].push_back(v);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        bool l = obj.isBridge(V, edges, c, d);
        if (l)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends