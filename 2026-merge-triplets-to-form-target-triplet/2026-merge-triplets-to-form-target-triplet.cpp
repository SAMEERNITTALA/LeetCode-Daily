class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool x_found = false, y_found = false, z_found = false;
        
        for(const auto& t : triplets) {
            if(t[0] <= target[0] && t[1] <= target[1] && t[2] <= target[2]) {
                if(t[0] == target[0]) x_found = true;
                if(t[1] == target[1]) y_found = true;
                if(t[2] == target[2]) z_found = true;
            }
        }
        
        return x_found && y_found && z_found;
    }
};
