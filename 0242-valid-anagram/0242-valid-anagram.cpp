class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size()) return false;
       unordered_map<char, int> m;

       for(char c : s) m[c]++;
       for(char d : t) m[d]--;

       for (auto it : m) if(it.second != 0) return false;
       
       return true; 
    }
};