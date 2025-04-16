class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<int, int> m;
        long long pairs = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            pairs += m[num];
            m[num]++;

            while(pairs >= k)
            {
                ans += nums.size() - i;
                pairs -= m[nums[j]] - 1;
                m[nums[j]]--;
                j++;
            }
        }
        return ans;
    }
};