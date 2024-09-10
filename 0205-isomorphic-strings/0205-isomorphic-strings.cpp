class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char, char> stot;
        unordered_map<char, char> ttos;

        for(int i = 0; i < s.size(); i++)
        {
            char x = s[i];
            char y = t[i];

            if(stot.count(x) && stot[x] != y) return false;
            if(ttos.count(y) && ttos[y] != x) return false;

            stot[x] = y;
            ttos[y] = x;
        }
        return true;
    }
};