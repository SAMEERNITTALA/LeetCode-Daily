class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int lsum = 0, rsum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++)
        {
            rsum -= nums[i];
            if(lsum == rsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};