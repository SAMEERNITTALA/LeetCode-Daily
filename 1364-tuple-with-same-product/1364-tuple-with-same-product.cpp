class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                count += 8 * m[nums[i] * nums[j]];
                m[nums[i] * nums[j]]++;
            }
        }
        return count;
    }
};