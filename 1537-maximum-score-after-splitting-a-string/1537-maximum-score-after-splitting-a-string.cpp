/*class Solution {
public:
    int maxScore(string s) {
       int l = 0, r = s.size() - 1;
       int max_ans = INT_MIN;
       while(l < r)
       {
            int ans = 0;
            for(int i = 0; i <= l; i++)
            {
                if(s[i] == '0') ans++;
            }
            for(int i = l+1; i <= r; i++)
            {
                if(s[i] == '1') ans++;
            }
            max_ans = max(ans, max_ans);
            l++;
       }
       return max_ans; 
    }
};*/
class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0, leftZeros = 0, maxScore = INT_MIN;

        // Count the total number of 1s in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        int rightOnes = totalOnes; // Initially, all 1s are in the right part

        // Traverse the string, updating leftZeros and rightOnes
        for (int i = 0; i < s.size() - 1; i++) { // Ensure split is valid
            if (s[i] == '0') leftZeros++;
            else rightOnes--;

            // Calculate the score for the current split
            maxScore = max(maxScore, leftZeros + rightOnes);
        }

        return maxScore;
    }
};
