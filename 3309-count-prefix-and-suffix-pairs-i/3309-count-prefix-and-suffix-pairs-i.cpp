class Solution {
public:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
        int a = str1.size();
        int b = str2.size();
        
        // Ensure str1 can be a prefix and suffix of str2
        if (a > b) return false;

        // Check prefix
        for (int i = 0; i < a; i++) {
            if (str1[i] != str2[i]) return false;
        }

        // Check suffix
        for (int i = 0; i < a; i++) {
            if (str1[i] != str2[b - a + i]) return false;
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        // Compare each pair of words
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i < j && isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};
