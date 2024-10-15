class Solution {
public:
    long long minimumSteps(string s) {
        int l = 0, r = s.size() - 1;
        long long count = 0;
        while(l < r)
        {
            if(s[l] == '0') l++;
            if(s[r] == '1') r--;
            else if(s[l] == '1' && s[r] == '0')
            {
                swap(s[l], s[r]);
                count += r - l;
            }
        }
        return count;
    }
};