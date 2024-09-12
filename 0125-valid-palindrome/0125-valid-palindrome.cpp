class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(char c : s)
        {
            if(isalnum(c)) x += tolower(c);
        }
        
        int n = x.size();
        int i = 0, j = n-1;

        while(i < j)
        {
            if(x[i] != x[j]) return false;
            i++, j--;
        }

        return true;
    }
};