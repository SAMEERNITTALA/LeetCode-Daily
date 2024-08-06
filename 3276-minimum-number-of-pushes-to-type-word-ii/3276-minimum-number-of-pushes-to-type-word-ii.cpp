class Solution {
public:
    int minimumPushes(string word) {
       vector<int> ans(26, 0);
       for(char c: word)
       {
        ans[c - 'a']++;
       }

       sort(ans.rbegin(), ans.rend());
       int totalMoves = 0;
       for(int i = 0; i < 26; i++)
       {
        if(ans[i] == 0) break;
        totalMoves += (i/8 + 1) * ans[i];
       }
       return totalMoves; 
    }
};