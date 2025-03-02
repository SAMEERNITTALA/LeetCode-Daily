class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int l = 0, r = 0;

        while (l < nums1.size() && r < nums2.size()) {
            if (nums1[l][0] == nums2[r][0]) {
                ans.push_back({nums1[l][0], nums1[l][1] + nums2[r][1]});
                l++;
                r++;
            } else if (nums1[l][0] < nums2[r][0]) {
                ans.push_back(nums1[l]);
                l++;
            } else {
                ans.push_back(nums2[r]);
                r++;
            }
        }

        // Add remaining elements from nums1
        while (l < nums1.size()) {
            ans.push_back(nums1[l]);
            l++;
        }

        // Add remaining elements from nums2
        while (r < nums2.size()) {
            ans.push_back(nums2[r]);
            r++;
        }

        return ans;
    }
};
