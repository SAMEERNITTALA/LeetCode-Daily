class Solution {
public:
    int getLucky(string s, int k) {
        string st = "";
        for(int i = 0; i < s.size(); i++) 
        {
            int value = s[i] - 'a' + 1;
            st += to_string(value);
        }

        int sum = 0;
        for(char c : st) 
        {
            sum += c - '0';
        }

        for(int i = 1; i < k; i++) {
            int newSum = 0;
            while(sum > 0) {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
        }

        return sum;
    }
};
