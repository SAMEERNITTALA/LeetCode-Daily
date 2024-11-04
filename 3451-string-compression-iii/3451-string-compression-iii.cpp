class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i = 0;
        int n = word.size();
        
        while (i < n) {
            char currentChar = word[i];
            int count = 0;
            
            // Count consecutive occurrences of the same character, up to a max of 9
            while (i < n && word[i] == currentChar && count < 9) {
                i++;
                count++;
            }
            
            // Append the count followed by the character
            ans += to_string(count) + currentChar;
        }
        
        return ans;
    }
};
