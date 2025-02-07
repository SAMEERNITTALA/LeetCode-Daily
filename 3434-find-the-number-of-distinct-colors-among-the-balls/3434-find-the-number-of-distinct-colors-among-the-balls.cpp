class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int, int> m, n;
        int count = 0;
        
        for(int i = 0; i < queries.size(); i++) 
        {
            auto it = m.find(queries[i][0]);
            
            if (it != m.end()) 
            {
                int oldColor = it->second;
                if (--n[oldColor] == 0) count--;
            }
            
            m[queries[i][0]] = queries[i][1];
            if (++n[queries[i][1]] == 1) count++;

            ans.emplace_back(count);
        }
        return ans;
    }
};

