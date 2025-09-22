class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxFreq = 0, ans = 0;

        for (int num : nums) {
            maxFreq = max(maxFreq, ++freq[num]);
        }

        for (auto& [num, count] : freq) {
            if (count == maxFreq) ans += count;
        }
        return ans;
    }
};
