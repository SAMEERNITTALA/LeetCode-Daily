class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n = possible.size();
        int totalPoints = 0;
        vector<int> prefixSum(n);

        for (int i = 0; i < n; ++i) {
            totalPoints += (possible[i] == 1) ? 1 : -1;
            prefixSum[i] = totalPoints;
        }

        for (int i = 0; i < n - 1; ++i) {
            int alicePoints = prefixSum[i];
            int bobPoints = prefixSum[n-1] - alicePoints;
            if (alicePoints > bobPoints) {
                return i + 1;
            }
        }

        return -1;
    }
};
