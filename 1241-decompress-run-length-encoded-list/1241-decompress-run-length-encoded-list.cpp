class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i = 1; i < nums.size(); i+=2)
        {
            for(int j = 0; j < nums[i-1]; j++)
            {
                v.emplace_back(nums[i]);
            }
        }
        return v;
    }
};