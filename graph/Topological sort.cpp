class Solution {
    stack<int> res;

    void dfs(int node, vector<bool>& visited, vector<vector<int>>& al) {
        visited[node] = true;

        for (auto neb : al[node]) {
            if (!visited[neb]) {
                dfs(neb, visited, al);
            }
        }

        res.push(node); 
        }

public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<bool> visited(V, false);
        vector<vector<int>> al(V); 

        for (auto edge : edges) {
            int v = edge[0];
            int e = edge[1];
            al[v].push_back(e);
        }

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, visited, al);
            }
        }

        vector<int> r;
        while (!res.empty()) {
            r.push_back(res.top());
            res.pop();
        }

        return r;
    }
};
