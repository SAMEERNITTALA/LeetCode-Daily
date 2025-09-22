class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> m;
        for(int num : nums) m[num]++;
        vector<int> v;
        for(const auto& pair : m)
        {
            v.emplace_back(pair.second);
        }
        sort(v.begin(), v.end(), greater<int>());
        int ans = v[0];
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i] == v[i-1]) ans += v[i];
            else break;
        }
        return ans;
    }
};