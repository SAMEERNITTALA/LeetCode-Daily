class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> v(n+1, 0);
        vector<int> ans;

        int l = 0, r = n;
        for(char c : s)
        {
            if(c == 'D')
            {
                v[r] = 1;
                ans.emplace_back(r);
                r--;
            }
            else
            {
                v[l] = 1;
                ans.emplace_back(l);
                l++;
            }
        }
        for(int i = 0; i <= n; i++)
        {
            if(v[i] == 0) ans.emplace_back(i);
        }

        return ans;
    }
};