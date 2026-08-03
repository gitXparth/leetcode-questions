class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        // Transform string
        string t = "#";
        for (char c : s) {
            t += c;
            t += "#";
        }

        int n = t.size();
        vector<int> P(n, 0);

        int center = 0;
        int right = 0;

        int maxLen = 0;
        int centerIndex = 0;

        for (int i = 0; i < n; i++) {

            int mirror = 2 * center - i;

            if (i < right)
                P[i] = min(right - i, P[mirror]);

            while (i - P[i] - 1 >= 0 &&
                   i + P[i] + 1 < n &&
                   t[i - P[i] - 1] == t[i + P[i] + 1]) {
                P[i]++;
            }

            if (i + P[i] > right) {
                center = i;
                right = i + P[i];
            }

            if (P[i] > maxLen) {
                maxLen = P[i];
                centerIndex = i;
            }
        }

        int start = (centerIndex - maxLen) / 2;
        return s.substr(start, maxLen);
    }
};