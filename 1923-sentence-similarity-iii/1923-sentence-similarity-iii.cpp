#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1 == sentence2) return true;
        
        // Split sentence1 into words
        vector<string> words1 = splitWords(sentence1);
        // Split sentence2 into words
        vector<string> words2 = splitWords(sentence2);

        // Ensure words1 is the smaller sentence
        if (words1.size() > words2.size()) {
            swap(words1, words2);
        }

        // Compare words from the start and the end
        int n1 = words1.size();
        int n2 = words2.size();
        int i = 0, j = 0;

        // Match words from the start
        while (i < n1 && words1[i] == words2[i]) {
            i++;
        }

        // Match words from the end
        while (j < n1 && words1[n1 - j - 1] == words2[n2 - j - 1]) {
            j++;
        }

        // If total matched words from the start and end cover the smaller sentence
        return i + j >= n1;
    }

private:
    // Helper function to split a sentence into words
    vector<string> splitWords(const string& sentence) {
        vector<string> words;
        stringstream ss(sentence);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        return words;
    }
};
