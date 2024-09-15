class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int n : nums) m[n]++;

        vector<int> v;
        for(const auto& p : m)
        {
            if(p.second == 2) v.emplace_back(p.first);
        }

        return v; 
    }
};