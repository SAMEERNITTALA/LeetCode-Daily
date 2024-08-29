class Solution {
public:
    int reachNumber(int target) {
        int t = abs(target);  // Work with the absolute value of target
        int steps = 0;
        int sum = 0;

        // Keep moving until the sum is at least equal to target
        while (sum < t || (sum - t) % 2 != 0) {
            steps++;
            sum += steps;
        }

        return steps;
    }
};
