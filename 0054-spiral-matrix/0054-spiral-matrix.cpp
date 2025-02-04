class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0, col = -1;
        int direction = 1;
        vector<int> ans;
        while(m > 0 && n > 0)
        {
            for(int i = 0; i < n; i++)
            {
                col += direction;
                ans.emplace_back(matrix[row][col]);
            }
            m--;

            for(int j = 0; j < m; j++)
            {
                row += direction;
                ans.emplace_back(matrix[row][col]);
            }
            n--;

            direction *= -1;
        }
        return ans;
    }
};