class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for (int num : nums) {
            if (num < k) return -1;  // impossible to reach k
        }

        set<int, greater<int>> uniqueGreater;
        for (int num : nums) {
            if (num > k) {
                uniqueGreater.insert(num);
            }
        }

        return uniqueGreater.size();
    }
};
