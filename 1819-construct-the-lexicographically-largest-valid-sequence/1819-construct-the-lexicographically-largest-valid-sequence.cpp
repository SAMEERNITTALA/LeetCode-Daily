class Solution {
public:
    vector<int> ans;
    vector<bool> used;
    
    bool backtrack(int idx, int n) {
        if (idx == ans.size()) return true;  // Successfully placed all numbers

        if (ans[idx] != 0) return backtrack(idx + 1, n);  // Skip already filled positions

        for (int num = n; num >= 1; --num) {  // Place the largest numbers first
            if (used[num]) continue;

            if (num == 1) {  // Place '1' only once
                ans[idx] = 1;
                used[1] = true;
                if (backtrack(idx + 1, n)) return true;
                ans[idx] = 0;
                used[1] = false;
            } 
            else {  // Place numbers > 1 at the correct distance
                int secondIdx = idx + num;
                if (secondIdx < ans.size() && ans[secondIdx] == 0) {
                    ans[idx] = ans[secondIdx] = num;
                    used[num] = true;
                    if (backtrack(idx + 1, n)) return true;
                    ans[idx] = ans[secondIdx] = 0;
                    used[num] = false;
                }
            }
        }
        return false;
    }

    vector<int> constructDistancedSequence(int n) {
        ans.resize(2 * n - 1, 0);
        used.resize(n + 1, false);
        backtrack(0, n);
        return ans;
    }
};
