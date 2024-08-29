class Solution {
public:
    int reachNumber(int target) {
        int i = 1;
        int ans = 0;
        int t = abs(target);
        long int x = 0;
        while(i*(i+1)/2 < t)
        {
            i++;
        }
        x = i;
        if(x % 4 == 1 || x % 4 == 2)//odd
        {
            if(t % 2 == 1) ans = x;//odd
            else//even
            {
                while(x % 4 == 1 || x % 4 == 2){
                    x++;
                }
                ans = x;
            }
        }
        else//even
        {
            if(t % 2 == 0) ans = x;//even
            else//odd
            {
                while(x % 4 == 0 || x % 4 == 3)
                {
                    x++;
                }
                ans = x;
            }
        }
        return ans; 
    }
};