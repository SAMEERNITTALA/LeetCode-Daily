class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;

        for(char c : t) m[c]++;

        for(char c : s) m[c]--;

        for(const auto &pair : m) 
        {
            if(pair.second > 0) return pair.first;
        }
        
        return '\0';
    }
};
