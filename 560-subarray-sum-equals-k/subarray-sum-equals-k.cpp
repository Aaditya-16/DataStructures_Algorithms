class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count = 0;
        map<int, int> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            
            int diff = prefixSum - k;
            if (mpp.find(diff) != mpp.end()) {
                count += mpp[diff];
            }
            
            if (prefixSum == k) {
                count++;
                mpp[prefixSum]++;
                continue;
            }
            mpp[prefixSum]++;
        }

        return count;
    }
};