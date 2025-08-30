class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int count = 0;
        string res = "";

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if (count == 0) {
                    count++;
                    continue;
                }
                res.push_back(s[i]);
                count++;
            }
            else if (s[i] == ')') {
                count--;
                if (count == 0) {
                    continue;
                }
                res.push_back(s[i]);
            }
            
        }

        return res;
    }
};