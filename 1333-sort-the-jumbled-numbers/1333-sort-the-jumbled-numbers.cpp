class Solution {
public:
    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> mappedNums;

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int ans = 0;
            stack<int> s;
            
            if (x == 0) {
                s.push(mapping[0]);
            } else {
                while (x) {
                    int a = x % 10;
                    s.push(mapping[a]);
                    x /= 10;
                }
            }
            
            while (!s.empty()) {
                ans = ans * 10 + s.top();
                s.pop();
            }

            mappedNums.emplace_back(ans, nums[i]);
        }

        stable_sort(mappedNums.begin(), mappedNums.end(), comp);

        vector<int> result;
        for (const auto& p : mappedNums) {
            result.push_back(p.second);
        }

        return result;
    }
};
