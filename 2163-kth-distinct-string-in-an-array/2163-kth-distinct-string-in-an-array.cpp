class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> m;
        for (int i = 0; i < arr.size(); i++) {
            ++m[arr[i]];
        }
        
        vector<string> ans;
        for (int i = 0; i < arr.size(); i++) {
            if (m[arr[i]] == 1) {
                ans.emplace_back(arr[i]);
            }
        }
        
        if (ans.size() < k) return "";
        return ans[k - 1];
    }
};
