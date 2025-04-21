class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long min_prefix = 0, max_prefix = 0, prefix = 0;

        for (int diff : differences) {
            prefix += diff;
            min_prefix = min(min_prefix, prefix);
            max_prefix = max(max_prefix, prefix);
        }

        long min_start = lower - min_prefix;
        long max_start = upper - max_prefix;

        return max(0L, max_start - min_start + 1);
    }
};
