class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows >= 1) ans.push_back({1});
        if (numRows >= 2) ans.push_back({1, 1});

        for (int i = 2; i < numRows; i++) 
        {
            vector<int> v(i + 1, 1);  
            if (!ans.empty()) 
            {
                for (int j = 1; j < i; j++) 
                {
                    v[j] = ans.back()[j - 1] + ans.back()[j];  
                }
            }
            ans.emplace_back(v);
        }

        return ans;
    }
};