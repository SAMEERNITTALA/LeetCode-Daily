class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, count = 0;
        for(char c : s)
        {
            if(c == '(') count++;
            else if(c == ')')
            {
                ans = max(ans, count);
                count--;
            }
        }
        return ans;
    }
};