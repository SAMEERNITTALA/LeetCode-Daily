class Solution {
public:
    std::vector<std::vector<int>> construct2DArray(std::vector<int>& original, int m, int n) {
        if (original.size() != m * n) {
            return {};
        }

        vector<std::vector<int>> v(m, vector<int>(n));

        for (int i = 0; i < original.size(); ++i) {
            int row = i / n;
            int col = i % n;
            v[row][col] = original[i];
        }

        return v;
    }
};
