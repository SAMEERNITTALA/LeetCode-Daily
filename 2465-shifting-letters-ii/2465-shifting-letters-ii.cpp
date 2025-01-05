class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> netShifts(n + 1, 0);

        // Build the difference array
        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            if (direction == 1) {
                netShifts[start] += 1;
                netShifts[end + 1] -= 1;
            } else {
                netShifts[start] -= 1;
                netShifts[end + 1] += 1;
            }
        }

        // Compute the prefix sum for net shifts
        for (int i = 1; i < n; ++i) {
            netShifts[i] += netShifts[i - 1];
        }

        // Apply the shifts to the string
        for (int i = 0; i < n; ++i) {
            int shift = netShifts[i] % 26;
            if (shift < 0) shift += 26; // Handle negative shifts
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
    }
};
