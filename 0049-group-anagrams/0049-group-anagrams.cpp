class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> v;
        for(const string& s : strs)
        {
            string x = s;
            sort(x.begin(), x.end());
            v[x].emplace_back(s);
        }

        vector<vector<string>> ans;
        for(auto& u : v) ans.emplace_back(u.second);

        return ans;
    }
};