class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        unordered_map<int, string> units = {
            {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
            {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"},
            {9, "Nine"}, {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"},
            {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"},
            {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
            {19, "Nineteen"}
        };

        unordered_map<int, string> tens = {
            {2, "Twenty"}, {3, "Thirty"}, {4, "Forty"},
            {5, "Fifty"}, {6, "Sixty"}, {7, "Seventy"},
            {8, "Eighty"}, {9, "Ninety"}
        };

        auto getHundred = [&](int num) {
            string str = "";
            if (num >= 100) {
                int n = num / 100;
                str += " " + units[n] + " Hundred";
                num %= 100;
            }

            if (num >= 20) {
                int n = num / 10;
                str += " " + tens[n];
                num %= 10;
            }

            if (num > 0) {
                str += " " + units[num];
            }

            return str;
        };

        string answer = "";
        if (num >= 1e9) {
            int n = num / 1e9;
            answer += getHundred(n) + " Billion";
            num %= 1000000000;
        }

        if (num >= 1e6) {
            int n = num / 1e6;
            answer += getHundred(n) + " Million";
            num %= 1000000;
        }

        if (num >= 1e3) {
            int n = num / 1e3;
            answer += getHundred(n) + " Thousand";
            num %= 1000;
        }

        answer += getHundred(num);

        return answer.substr(1);
    }
};
