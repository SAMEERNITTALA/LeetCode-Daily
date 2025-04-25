class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        unordered_map<int, long long> freq;
        freq[0] = 1; // base case: prefix sum = 0
        long long result = 0;
        int count = 0;

        for (int num : nums) {
            if (num % modulo == k) count++;
            int curr_mod = count % modulo;
            int required = (curr_mod - k + modulo) % modulo;
            result += freq[required];
            freq[curr_mod]++;
        }

        return result;
    }
};
