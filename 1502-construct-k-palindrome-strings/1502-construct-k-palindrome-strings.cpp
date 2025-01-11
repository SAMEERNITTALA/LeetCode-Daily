class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        map<char, int> m;
        for(char c : s) m[c]++;
        int count = 0;
        for(const auto& pair : m)
        {
            if(pair.second % 2 == 1) count++;
            cout <<  pair.first << " " << pair.second << "\n";
        }
        return count <= k;
    }
};