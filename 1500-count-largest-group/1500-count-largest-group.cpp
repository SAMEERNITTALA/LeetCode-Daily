class Solution {
public:
    int countLargestGroup(int n) {
        map<int, int> m;
        for(int i = 1; i <= n; i++)
        {
            int sum = 0, x = i;
            while(x > 0)
            {
                sum += x % 10;
                x = x / 10;
            }
            m[sum]++;
        }

        int mval = 0;
        for(const auto& pair : m)
        {
            mval = max(mval, pair.second);
        }

        int ans = 0;
        for(const auto& pair : m)
        {
            if(pair.second == mval) ans++;
        }

        return ans;
    }
};
