class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        int n = words.size();
        vector<int> prefixSum(n + 1, 0);

        // Build prefix sum for vowel strings
        for (int i = 0; i < n; i++) {
            string word = words[i];
            if (isVowel(word[0]) && isVowel(word.back())) {
                prefixSum[i + 1] = prefixSum[i] + 1;
            } else {
                prefixSum[i + 1] = prefixSum[i];
            }
        }

        // Answer the queries
        vector<int> ans;
        for (const auto& query : queries) {
            int li = query[0];
            int ri = query[1];
            ans.push_back(prefixSum[ri + 1] - prefixSum[li]);
        }

        return ans;
    }
};
