class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> v;
        int m = rolls.size();
        int sum = 0;
        for(int r : rolls) sum += r;
        int value = mean * (m + n) - sum;
        if(value > 6 * n || mean > 6 || value < n) return {};
        else if(value == 6 * n)
        {
            for(int i = 0; i < n; i++) v.emplace_back(6);
        }
        else
        {
            int x = value / n;
            int y = value % n;
            if(x + y <= 6)
            {
                for(int i = 0; i < n-1; i++) v.emplace_back(x);
                v.emplace_back(x+y);
            }
            else
            {
                for(int i = 0; i < n; i++) v.emplace_back(x);
                for(int i = 0; i < y; i++)
                {
                    v[i] += 1;
                }
            }
        }
        return v;
    }
};