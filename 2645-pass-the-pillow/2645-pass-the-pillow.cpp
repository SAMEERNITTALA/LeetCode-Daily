class Solution {
public:
    int passThePillow(int n, int time) {
        int direction = 1;
        int i = 1, count = 0;
        while(i >= 1 && i <= n)
        {
            i += direction;
            count++;
            if(i == n || i == 1) direction *= -1;
            if(count == time) break;
        }
        return i;
    }
};