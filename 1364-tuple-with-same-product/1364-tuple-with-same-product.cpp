class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int count = 0;
        unordered_map<int, vector<pair<int, int>>> m;
        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(m.find(nums[i]*nums[j]) != m.end())
                {
                    vector<pair<int, int>> v = m[nums[i] * nums[j]];
                    for(auto& pair : v)
                    {
                        if(pair.first != nums[i] && pair.first != nums[j] && pair.second != nums[i] && pair.second != nums[j]) count += 8;
                    }
                }
                m[nums[i] * nums[j]].emplace_back(nums[i], nums[j]);
            }
        }
        return count;
    }
};