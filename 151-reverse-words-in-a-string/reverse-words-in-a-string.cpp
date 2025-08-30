class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int i = 0;
        int start = 0;
        int end = 0;
        while (i < s.length()) {
            while (i < s.length() && s[i] == ' ') {
                s.erase(i, 1);

            }
            start = i;
            while (i < s.length() && s[i] != ' ') i++;
            end = i-1;
            reverse(s.begin()+start, s.begin()+end+1);
            i++;
        }
        if (s[s.length()-1] == ' ') {
            s.resize(s.length()-1);
        }

        return s;
    }
};