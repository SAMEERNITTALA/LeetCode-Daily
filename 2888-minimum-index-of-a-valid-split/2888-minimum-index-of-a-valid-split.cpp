class Solution {
public:
    vector<int> mostFrequentNumber(vector<int> &arr) {
        unordered_map<int, int> freq;
        int maxFreq = 0, mostFrequent = -1;

        for (int num : arr) {
            freq[num]++;
            if (freq[num] > maxFreq) {
                maxFreq = freq[num];
                mostFrequent = num;
            }
        }

        return {mostFrequent, maxFreq};
    }

    int minimumIndex(vector<int>& nums) {
        int ans = -1;
        vector<int> num = mostFrequentNumber(nums);
        int n = nums.size();
        int i = 0, count = 0;
        while(i < n)
        {
            if(nums[i] == num[0])
            {
                count++;
                if((count * 2 > i+1) && ((num[1] - count) * 2 > n-i-1))
                {
                    ans = i;
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};