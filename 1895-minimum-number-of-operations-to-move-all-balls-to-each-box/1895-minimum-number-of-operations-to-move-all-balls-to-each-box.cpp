class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);
        int count = 0, operations = 0;

        // Left to right pass
        for (int i = 0; i < n; ++i) {
            answer[i] += operations;
            count += (boxes[i] == '1') ? 1 : 0;
            operations += count;
        }

        count = 0;
        operations = 0;

        // Right to left pass
        for (int i = n - 1; i >= 0; --i) {
            answer[i] += operations;
            count += (boxes[i] == '1') ? 1 : 0;
            operations += count;
        }

        return answer;
    }
};
