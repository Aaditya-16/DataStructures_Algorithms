class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;

        string concat = s+s;
        // return concat.find(goal) != string::npos;

        int j = 0;

        for (int i = 0; i < concat.length(); i++) {
            if (concat[i] == goal[j]) {
                j++;
                if (j == goal.length()) return true;
            }
            else if (j != 0) {
                i = i-j;
                j = 0;
            }
        }
        return false;
    }
};