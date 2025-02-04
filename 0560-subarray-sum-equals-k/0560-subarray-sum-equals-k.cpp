class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, sum = 0;
        unordered_map<int, int> um;
        um[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(um.find(sum - k) != um.end()) ans += um[sum-k];
            if(um.find(sum) == um.end()) um[sum] = 1;
            else if(um.find(sum) != um.end()) um[sum]++;
        }
        return ans;
    }
};