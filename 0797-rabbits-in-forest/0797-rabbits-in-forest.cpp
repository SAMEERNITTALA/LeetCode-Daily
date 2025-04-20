class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> count;
        for (int a : answers)
            count[a]++;

        int total = 0;
        for (auto& [x, c] : count) {
            int groupSize = x + 1;
            int groups = (c + groupSize - 1) / groupSize; // ceiling of c / (x + 1)
            total += groups * groupSize;
        }
        return total;
    }
};
