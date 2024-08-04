class Solution {
public:
    int reverse(int x) {
        // Determine the sign of x
        int sign = (x < 0) ? -1 : 1;
        x = abs(x);
        
        // Vector to store the digits
        vector<int> v;
        while(x > 0) {
            int a = x % 10;
            v.emplace_back(a); // Add all digits, including zeros
            x = x / 10;
        }
        
        // Reverse the digits and construct the reversed number
        int num = 0;
        for(int i = 0; i < v.size(); i++) {
            // Check for overflow before multiplying by 10
            if (num > (INT_MAX - v[i]) / 10) {
                return 0; // Return 0 if overflow occurs
            }
            num = (num * 10) + v[i];
        }
        
        // Reapply the sign
        num *= sign;
        
        return num;
    }
};
