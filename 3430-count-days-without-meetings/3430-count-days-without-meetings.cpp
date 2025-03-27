class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int ans = 0;
        ans += meetings[0][0] - 1;
        for(int i = 1; i < meetings.size(); i++)
        {
            if(meetings[i][0] > meetings[i-1][1]) ans += meetings[i][0] - meetings[i-1][1] - 1;
            else meetings[i][1] = max(meetings[i-1][1], meetings[i][1]);
        }
        ans += days - meetings.back()[1];
        return ans;
    }
};