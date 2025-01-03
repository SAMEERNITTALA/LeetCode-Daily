class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        long long total = accumulate(nums.begin(), nums.end(), 0LL);
        long long sum = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            sum += nums[i];
            if(sum >= total - sum) count++;
        }
        return count;
    }
};