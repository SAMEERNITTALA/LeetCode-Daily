class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd_count = 0, even_count = 1; // even_count = 1 to handle cases where sum itself is odd
        int sum = 0, ans = 0;
        const int mod = 1e9 + 7;

        for (int num : arr) {
            sum += num;
            if (sum % 2 == 0) {
                ans = (ans + odd_count) % mod;
                even_count++;
            } else {
                ans = (ans + even_count) % mod;
                odd_count++;
            }
        }
        return ans;
    }
};
