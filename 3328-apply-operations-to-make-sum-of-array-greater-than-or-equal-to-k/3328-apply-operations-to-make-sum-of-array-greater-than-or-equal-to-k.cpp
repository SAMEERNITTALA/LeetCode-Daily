// class Solution {
// public:
//     int minOperations(int k) {
//         vector<int> v;
//         v.emplace_back(0);
//         v.emplace_back(1);
//         int l = 2;
//         int count = 0;
//         for(int i = 2; i < k; i++)
//         {
//             for(int j = 0; j < l; j++)
//             {
//                 v.emplace_back(i);
//             }
//             count++;
//             if(count % 2 == 0) l++;
//         }
//         return v[k-1];
//     }
// };

class Solution {
public:
    int minOperations(int k) {
        if (k == 1)
            return 0;
        
        int cnt = INT_MAX;
        int num = 1;
        
        while (num <= k)
        {
            cnt = min(cnt, static_cast<int>(ceil(static_cast<double>(k) / num)) - 1 + (num - 1));
            num++;
        }
        return cnt;
    }
};