class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int> negi;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                posi.emplace_back(nums[i]);
            }
            else if(nums[i] < 0) {
                negi.emplace_back(nums[i]);
            }
        }

        int p = 0; 
        int q = 0;
        for (int i = 0; i < n; i++) {
            if (i%2 == 0) {
                nums[i] = posi[p];
                p++;
            }
            else {
                nums[i] = negi[q];
                q++;
            }
        }

        return nums;
    }
};