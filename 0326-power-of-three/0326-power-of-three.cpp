class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        int rem = 0;
        while(n > 1)
        {
            rem += n % 3;
            n = n / 3;
        }
        return rem == 0;
    }
};