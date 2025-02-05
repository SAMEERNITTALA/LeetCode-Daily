class Solution {
public:
    vector<int> generateRow(int rowNum) {
        vector<int> v;
        long long val = 1;
        v.emplace_back(val);
        for(int i = 1; i < rowNum; i++)
        {
            val *= (rowNum - i);
            val /= i;
            v.emplace_back(val);
        }
        return v;
    }


    vector<vector<int>> generate(int numRows) {
        /*vector<vector<int>> ans;
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

        return ans;*/

        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++)
        {
            ans.emplace_back(generateRow(i));
        }
        return ans;
    }
};