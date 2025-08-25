class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> v;
        map<int, vector<int>> mp;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                mp[i+j].emplace_back(mat[i][j]);
            }
        }
        for(const auto& pair : mp)
        {
            if(pair.first % 2 == 0)
            {
                v.insert(v.end(), pair.second.rbegin(), pair.second.rend());
            }
            else
            {
                v.insert(v.end(), pair.second.begin(), pair.second.end());
            }
        }
        return v;
    }
};