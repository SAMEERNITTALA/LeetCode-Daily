class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // First, take the transpose of the matrix
        for(int i = 0; i < m; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Then, reverse each row
        for(int i = 0; i < m; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        // Printing matrix
        cout << "[";
        for(int i = 0; i < m; i++) {
            cout << "[";
            for(int j = 0; j < n; j++) {
                cout << matrix[i][j];
                if(j < n-1) cout << ",";
            }
            cout << "]";
            if(i < n-1) cout << ",";
        }
        cout << "]";
    }
};
