
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;  // Skip leading spaces

        // Handle optional '+' or '-' sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) 
        {
            if (s[i] == '-') sign = -1;
            i++;
        }

        long num = 0;  // Use long to check for overflow before casting to int
        while (i < n && isdigit(s[i])) 
        {
            num = num * 10 + (s[i] - '0');

            // Clamp values within INT_MIN and INT_MAX
            if (sign * num > INT_MAX) return INT_MAX;
            if (sign * num < INT_MIN) return INT_MIN;

            i++;
        }

        return static_cast<int>(sign * num);
    }
};