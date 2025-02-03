class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest = 1, inc_cnt = 1, dec_cnt = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) { // Strictly increasing
                inc_cnt++;
                dec_cnt = 1; // Reset decreasing count
            } 
            else if (nums[i] < nums[i - 1]) { // Strictly decreasing
                dec_cnt++;
                inc_cnt = 1; // Reset increasing count
            } 
            else { // Equal elements, reset both counts
                inc_cnt = 1;
                dec_cnt = 1;
            }

            longest = max(longest, max(inc_cnt, dec_cnt));
        }

        return longest;
    }
};
