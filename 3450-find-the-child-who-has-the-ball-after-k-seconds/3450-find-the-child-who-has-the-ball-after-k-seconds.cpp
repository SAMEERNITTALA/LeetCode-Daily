class Solution {
public:
    int numberOfChild(int n, int k) {
        int direction = 1;
        int i = 0, count = 0;
        while(i >= 0 && i < n)
        {
            i += direction;
            count++; 
            if(i == n-1 || i == 0) direction *= -1;
            if(count == k) break;
        }
        return i; 
    }
};