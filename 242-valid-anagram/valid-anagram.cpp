class Solution {
public:
    bool isAnagram(string s, string t) {
        //vector approach
        // vector<int> alpha(26,0);

        // for (char c : s) {
        //     alpha[c-'a']++;
        // }
        // for (char c : t) {
        //     alpha[c-'a']--;
        // }

        // for (int i : alpha) {
        //     if (i != 0) return false;
        // }

        // return true;

        //hashmap approach
        unordered_map<char, int> mpp;
        for (char c : s) {
            mpp[c]++;
        }
        for (char c : t) {
            if (mpp.find(c) == mpp.end()) return false;
            mpp[c]--;
            if (mpp[c] < 0) return false;
        }
        for (auto i : mpp) {
            if (i.second != 0) return false;
        }
        return true;
    }
};