class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag = true;
        int n = nums.size();
        int great = nums[n-1];
        int greatI = n-1;
        for (int j = n-2; j >= 0; j--) {
            int min = INT_MAX;
            int minI = -1;
            for (int k = j+1; k < n; k++) {
                if (nums[k]-nums[j]>0 && nums[k]-nums[j] < min) {
                    min = nums[k];
                    minI = k;
                }
            }
            if (minI != -1) {
                swap(nums[j], nums[minI]);
                sort(nums.begin()+j+1, nums.end());
                break;
            }
            else {
                if (j==0) {
                    sort(nums.begin(), nums.end());
                    break;
                }
            }
        }
    }
};