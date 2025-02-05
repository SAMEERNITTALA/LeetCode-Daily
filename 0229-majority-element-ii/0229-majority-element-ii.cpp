class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> m;
        for(int num : nums) m[num]++;
        for(const auto& it : m)
        {
            if(it.second > n/3) ans.emplace_back(it.first);
        }
        return ans;
    }
};