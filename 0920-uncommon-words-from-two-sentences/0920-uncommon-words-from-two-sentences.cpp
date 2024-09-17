class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        unordered_map<string, int> m;

        stringstream ss(s1);
        string word;
        while(ss >> word) m[word]++;

        stringstream xx(s2);
        string drow;
        while(xx >> drow) m[drow]++;

        for(const auto& pair : m)
        {
            if(pair.second == 1) v.emplace_back(pair.first);
        }
        
        return v;
    }
};