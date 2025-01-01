class Solution {
public:
    int maxScore(string s) {
       int l = 0, r = s.size() - 1;
       int max_ans = INT_MIN;
       while(l < r)
       {
            int ans = 0;
            for(int i = 0; i <= l; i++)
            {
                if(s[i] == '0') ans++;
            }
            for(int i = l+1; i <= r; i++)
            {
                if(s[i] == '1') ans++;
            }
            max_ans = max(ans, max_ans);
            l++;
       }
       return max_ans; 
    }
};