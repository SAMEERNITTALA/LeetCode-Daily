class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxVal = *max_element(nums.begin(), nums.end());
        long long count = 0;
        int left = 0, maxCount = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] == maxVal) maxCount++;

            while (maxCount >= k) {
                // all subarrays from left to right are valid
                count += (n - right);
                if (nums[left] == maxVal) maxCount--;
                left++;
            }
        }
        return count;
    }
};
