class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        int maxi = 0;

        for (auto i : st) {
            if(st.find(i-1) == st.end()) {
                int cnt = 1;
                int x = i;
                while (st.find(x+1) != st.end()) {
                    cnt++;
                    x += 1;
                }
                maxi = max(maxi, cnt);
            }
        }

        return maxi;
    }
};