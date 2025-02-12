class Solution {
public:
    int genSum(int num) {
        int ans = 0;
        while(num != 0)
        {
            int a = num % 10;
            ans += a;
            num = num / 10;
        }
        return ans;
    }
    
    int maximumSum(vector<int>& nums) {
        int ans = -1;
        unordered_map<int, vector<int>> m;
        for(int num : nums) m[genSum(num)].emplace_back(num);
        for(auto pair : m)
        {
            if(pair.second.size() >= 2)
            {
                sort(pair.second.begin(), pair.second.end(), greater<int>());
                ans = max(ans, pair.second[0] + pair.second[1]);
            }
        }
        return ans;
    }
};