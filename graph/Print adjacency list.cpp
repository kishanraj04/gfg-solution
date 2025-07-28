class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector<vector<int>> res(V);
        
        for(auto &edge:edges){
            int v = edge.first;
            int e = edge.second;
            
            res[v].push_back(e);
            res[e].push_back(v);
        }
        return res;
    }
};