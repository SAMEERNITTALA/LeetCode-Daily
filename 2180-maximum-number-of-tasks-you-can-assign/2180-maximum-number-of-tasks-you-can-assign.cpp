class Solution {
public:
    bool canAssign(int k, vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        multiset<int> workerSet;
        int n = workers.size();
        for (int i = n - k; i < n; ++i)
            workerSet.insert(workers[i]);

        int p = pills;
        for (int i = k - 1; i >= 0; --i) {
            int task = tasks[i];
            auto it = workerSet.lower_bound(task);
            if (it != workerSet.end()) {
                workerSet.erase(it);
            } else {
                if (p == 0) return false;
                it = workerSet.lower_bound(task - strength);
                if (it == workerSet.end()) return false;
                workerSet.erase(it);
                --p;
            }
        }
        return true;
    }

    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int low = 0, high = min(tasks.size(), workers.size()), ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canAssign(mid, tasks, workers, pills, strength)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
