class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int minVal = INT_MAX;
        long long sum = 0;
        int neg = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] < 0) neg++;
                int absVal = abs(matrix[i][j]);
                minVal = min(absVal, minVal);
                sum += absVal;

            }
        }
        if(neg % 2 == 0) return sum;
        return sum - 2 * minVal;
    }
};