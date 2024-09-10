class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;  
        unordered_map<string, char> wordToChar;  

        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) words.emplace_back(word);

        if (pattern.size() != words.size()) return false;

        for (int i = 0; i < pattern.size(); ++i) 
        {
            char p = pattern[i];
            string w = words[i];

            if (charToWord.count(p) && charToWord[p] != w) return false;
            if (wordToChar.count(w) && wordToChar[w] != p) return false;

            charToWord[p] = w;
            wordToChar[w] = p;
        }

        return true;
    }
};
