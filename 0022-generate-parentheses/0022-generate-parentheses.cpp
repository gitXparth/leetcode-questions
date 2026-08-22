class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        backtrack("", 0, 0, n, ans);
        
        return ans;
    }

    void backtrack(string current, int open, int close, int n,
                   vector<string>& ans) {
        
        if (current.length() == 2 * n) {
            ans.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(current + '(', open + 1, close, n, ans);
        }

        if (close < open) {
            backtrack(current + ')', open, close + 1, n, ans);
        }
    }
};