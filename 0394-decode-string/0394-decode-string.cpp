class Solution {
public:
    string decodeString(string s) {

        stack<int> numStack;
        stack<string> stringStack;

        string current = "";
        int num = 0;

        for (char ch : s) {

            // Case 1: number
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            // Case 2: opening bracket
            else if (ch == '[') {
                numStack.push(num);
                stringStack.push(current);

                num = 0;
                current = "";
            }

            // Case 3: closing bracket
            else if (ch == ']') {

                int repeat = numStack.top();
                numStack.pop();

                string previous = stringStack.top();
                stringStack.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }

                current = previous + temp;
            }

            // Case 4: character
            else {
                current += ch;
            }
        }

        return current;
    }
};