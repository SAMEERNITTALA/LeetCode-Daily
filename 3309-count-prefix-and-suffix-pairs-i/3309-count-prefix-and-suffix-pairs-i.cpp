class Solution {
public:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
        int a = str1.size();
        int b = str2.size();

        if (a > b) return false;

        for (int i = 0; i < a; i++) {
            if (str1[i] != str2[i]) return false;
        }

        for (int i = 0; i < a; i++) {
            if (str1[i] != str2[b - a + i]) return false;
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) 
        {
            for (int j = i+1; j < words.size(); j++) 
            {
                if (isPrefixAndSuffix(words[i], words[j])) count++;
            }
        }
        return count;
    }
};
