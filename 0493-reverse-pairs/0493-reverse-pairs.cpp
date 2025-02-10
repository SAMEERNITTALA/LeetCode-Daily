class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int left = low;
        int right = mid+1;

        vector<int> temp;

        while(left <= mid && right <= high)
        {
            if(nums[left] <= nums[right])
            {
                temp.emplace_back(nums[left]);
                left++;
            }
            else
            {
                temp.emplace_back(nums[right]);
                right++;
            }
        }

        while(left <= mid)
        {
            temp.emplace_back(nums[left]);
            left++;
        }

        while(right <= high)
        {
            temp.emplace_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++)
        {
            nums[i] = temp[i - low];
        }

    }

    int countPairs(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;
        for(int i = low; i <= mid; i++)
        {
            while(right <= high && nums[i] > (long long)2 * nums[right]) right++;
            count += (right - (mid + 1));
        }
        return count;
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        int count = 0;
        if(low >= high) return count;
        int mid = (low + high) / 2;
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid+1, high);
        count += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return count;
    }

    int reversePairs(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        ans = mergeSort(nums, 0, n-1);
        return ans;
    }
};