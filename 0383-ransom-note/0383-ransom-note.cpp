class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        
        for(char c : magazine) m[c]++;
        for(char s : ransomNote) m[s]--;

        for(const auto& pair : m)
        {
            if(pair.second < 0) return false;
        }

        return true; 
    }
};