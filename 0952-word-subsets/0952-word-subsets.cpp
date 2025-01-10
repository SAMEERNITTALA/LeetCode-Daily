class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        
        unordered_map<char, int> maxFreq;
        for (const string& word : words2) {
            unordered_map<char, int> freq;
            for (char c : word) {
                freq[c]++;
            }
            for (const auto& pair : freq) {
                maxFreq[pair.first] = max(maxFreq[pair.first], pair.second);
            }
        }

        for(const string& word : words1)
        {
            unordered_map<char, int> freq;
            for(char c : word) freq[c]++;

            bool isPresent = true;
            for(const auto& pair : maxFreq)
            {
                if(freq[pair.first] < pair.second)
                {
                    isPresent = false;
                    break;
                }
            }

            if(isPresent) ans.emplace_back(word);
        }

        return ans;
    }
};