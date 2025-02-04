class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0, rsum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++)
        {
            if(lsum == rsum - nums[i]) return i;
            lsum += nums[i];
            rsum -= nums[i];
        }
        return -1;
    }
};