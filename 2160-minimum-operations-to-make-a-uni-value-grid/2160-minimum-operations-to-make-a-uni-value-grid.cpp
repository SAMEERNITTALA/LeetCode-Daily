class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                arr.emplace_back(grid[i][j]);
            }
        }
        int remainder = arr[0] % x;
        for(int num : arr)
        {
            if(num % x != remainder) return -1;
        }
        sort(arr.begin(), arr.end());
        int ans = 0, median = arr[arr.size() / 2];
        for(int i = 0; i < arr.size(); i++)
        {
            ans += abs(median - arr[i]) / x;
        }
        return ans;
    }
};