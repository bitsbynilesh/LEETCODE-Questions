class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";

        auto backtrack = [&](auto& self, int openCount, int closeCount) -> void {
            if (current.length() == 2 * n) {
                result.push_back(current);
                return;
            }

            if (openCount < n) {
                current.push_back('(');
                self(self, openCount + 1, closeCount);
                current.pop_back();
            }

            if (closeCount < openCount) {
                current.push_back(')');
                self(self, openCount, closeCount + 1);
                current.pop_back();
            }
        };

        backtrack(backtrack, 0, 0);
        return result;
    }
};