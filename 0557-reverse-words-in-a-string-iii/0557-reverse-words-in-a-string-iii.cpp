class Solution {
public:
    string reverseWords(string s) {
        string r = "", a = "";
        
        for(int i = 0; i <= s.size(); i++) 
        {
            if(i < s.size() && s[i] != ' ') 
            {
                a += s[i];
            } 
            else 
            {
                reverse(a.begin(), a.end());
                r += a;
                if(i < s.size()) r += ' ';
                a = "";
            }
        }
        return r;
    }
};
