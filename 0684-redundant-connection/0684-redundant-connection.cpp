class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n + 1);
        
        // Initialize parent array
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }

        // Function to find the root of a node (with path compression)
        function<int(int)> find = [&](int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };

        // Process each edge
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            int rootU = find(u);
            int rootV = find(v);

            // If both nodes have the same root, this edge creates a cycle
            if (rootU == rootV) {
                return edge;
            }

            // Union operation: attach one root to the other
            parent[rootU] = rootV;
        }

        return {};
    }
};
