#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the digits array from the end to the beginning
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, just increment it and return the array
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0
            digits[i] = 0;
        }
        
        // If all digits were 9, we need an extra digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
