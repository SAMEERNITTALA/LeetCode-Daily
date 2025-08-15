class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false;
        double ans = log2(n);
        return ans / 2 == floor(ans / 2);
    }
};