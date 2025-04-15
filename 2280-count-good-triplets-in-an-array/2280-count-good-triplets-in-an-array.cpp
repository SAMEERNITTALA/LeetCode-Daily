class Solution {
public:
    class FenwickTree {
        vector<int> bit;
        int n;
    public:
        FenwickTree(int size) {
            n = size + 2;
            bit.assign(n, 0);
        }
        void update(int index, int val) {
            index++;
            while (index < n) {
                bit[index] += val;
                index += index & -index;
            }
        }
        int query(int index) {
            index++;
            int res = 0;
            while (index > 0) {
                res += bit[index];
                index -= index & -index;
            }
            return res;
        }
        int rangeQuery(int left, int right) {
            return query(right) - query(left - 1);
        }
    };

    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> indexInNums2(n);
        for (int i = 0; i < n; ++i) {
            indexInNums2[nums2[i]] = i;
        }

        vector<int> pos(n);
        for (int i = 0; i < n; ++i) {
            pos[i] = indexInNums2[nums1[i]];
        }

        vector<int> left_smaller(n), right_larger(n);
        FenwickTree leftBIT(n), rightBIT(n);

        // Calculate left_smaller
        for (int i = 0; i < n; ++i) {
            left_smaller[i] = leftBIT.query(pos[i] - 1);
            leftBIT.update(pos[i], 1);
        }

        // Calculate right_larger
        for (int i = n - 1; i >= 0; --i) {
            right_larger[i] = rightBIT.query(n - 1) - rightBIT.query(pos[i]);
            rightBIT.update(pos[i], 1);
        }

        long long res = 0;
        for (int i = 0; i < n; ++i) {
            res += 1LL * left_smaller[i] * right_larger[i];
        }

        return res;
    }
};
