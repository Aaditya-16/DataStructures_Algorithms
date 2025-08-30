class Solution {
public:
    string largestOddNumber(string num) {
        int end = -1;
        for (int i = num.length()-1; i >= 0; i--) {
            int val = num[i]-'0';
            //cout << val << endl;
            if (val % 2 != 0) {
                end = i;
                break;
            }
        }
        //cout << end << "\n";
        string res = num.substr(0, end+1);
        return res;
    }
};