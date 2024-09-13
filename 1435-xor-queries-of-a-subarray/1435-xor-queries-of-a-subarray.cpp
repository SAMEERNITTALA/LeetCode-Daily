class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> v;
        for(int i = 0; i < queries.size(); i++)
        {
            int x = 0;
            for(int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                x = x ^ arr[j];
            }
            v.emplace_back(x);
        }
        return v;
    }
};