class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int first = nums[0];
       int second = INT_MIN;
       int third = INT_MIN;
       int flag = 0;
       if(nums[0]==INT_MIN){
        flag =1;
       }

        for(int i = 1; i < nums.size(); i++)
        {
             if(nums[i]==INT_MIN)
                {
                    flag=1;
                }
            if(nums[i] > first)
            {
               
                third = second;
                second = first;
                first = nums[i];
            }
            else if(nums[i] < first && second < nums[i])
            {

                third = second;
                second = nums[i];
            }  
            else if(nums[i] < second && third < nums[i]) 
            {
                third = nums[i];
            }
        }
        if((third == INT_MIN && flag==0) || third==second) return first;
        return third;
    }
};