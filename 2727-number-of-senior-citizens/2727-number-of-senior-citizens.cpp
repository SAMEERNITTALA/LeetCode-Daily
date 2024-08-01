class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++)
        {
            string ans = "";
            ans += details[i][11];
            ans += details[i][12];
            if(stoi(ans) > 60)
            {
                count += 1;
            }
        }
        return count;
    }
};