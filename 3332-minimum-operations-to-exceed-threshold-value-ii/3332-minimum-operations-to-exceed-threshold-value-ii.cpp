class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size() < 2) return 0;
        int ans = 0;
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;

        for(int num : nums) minHeap.push(num);
        while(!minHeap.empty())
        {
            if(minHeap.top() >= k) break;
            else
            {
                long long x = minHeap.top();
                minHeap.pop();
                long long y = minHeap.top();
                minHeap.pop();
                long long z = min(x, y) * 2 + max(x, y);
                minHeap.push(z);
                ans++;
            } 
        }
        return ans;
    }
};