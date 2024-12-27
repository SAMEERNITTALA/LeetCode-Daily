class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = INT_MIN;
        int bestScore = values[0];
        for(int j = 1; j < values.size(); j++)
        {
            maxScore = max(maxScore, bestScore + values[j] - j);

            bestScore = max(bestScore, values[j] + j);
        }
        return maxScore;
    }
};