class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string res = "";
        // for (int i = 0; i < strs[0].length(); i++) {
        //     bool flag = true;
        //     for (int j = 1; j < strs.size(); j++) {
        //         if (i >= strs[j].length() || strs[0][i] != strs[j][i]) {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag == false) break;
        //     res = res+strs[0][i];
        // }
        // return res;

        sort(strs.begin(), strs.end());
        int n = strs.size();
        int i = 0;
        string res = "";
        while (i< strs[0].length() && i < strs[n-1].length()) {
            if (strs[0][i] == strs[n-1][i]) {
                res = res + strs[0][i];
                i++;
            }
            else {
                break;
            }
        }
        return res;
    }
};