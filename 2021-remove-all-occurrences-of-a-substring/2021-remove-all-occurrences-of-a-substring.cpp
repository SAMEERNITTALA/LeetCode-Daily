class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result = "";
        int n = part.size();

        for (char c : s) 
        {
            result += c;

            if (result.size() >= n && result.substr(result.size() - n) == part) 
            {
                result.erase(result.size() - n);
            }
        }

        return result;
    }
};
