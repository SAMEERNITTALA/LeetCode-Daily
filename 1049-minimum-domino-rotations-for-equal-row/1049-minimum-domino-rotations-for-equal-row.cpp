class Solution {
public:
    int check(int x, vector<int>& tops, vector<int>& bottoms) {
        int rotations_top = 0, rotations_bottom = 0;
        int n = tops.size();
        for (int i = 0; i < n; i++) {
            // If x is not in either top or bottom at i, return -1 (impossible)
            if (tops[i] != x && bottoms[i] != x)
                return -1;
            else if (tops[i] != x)
                rotations_top++;
            else if (bottoms[i] != x)
                rotations_bottom++;
        }
        return min(rotations_top, rotations_bottom);
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int result = check(tops[0], tops, bottoms);
        // If tops[0] and bottoms[0] are same, we don't need to check bottoms[0] again
        if (result != -1 || tops[0] == bottoms[0])
            return result;
        else
            return check(bottoms[0], tops, bottoms);
    }
};
