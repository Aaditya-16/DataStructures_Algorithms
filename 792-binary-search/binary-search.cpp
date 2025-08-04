class Solution {
public:
    int iterativeBinarySearch(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int index = -1;

        while (low <= high) {
            int mid = (low+high)/2;
            if (nums[mid] == target) {
                index = mid;
                break;
            }
            else if (target < nums[mid]) {
                high = mid-1;
                continue;
            }
            else {
                low = mid+1;
                continue;
            }
        }

        return index;
    }

    int recursiveBinarySearch(vector<int> &nums, int low, int high, int target) {
        if (low>high) return -1;

        int mid = (low+high)/2;
        if (nums[mid] == target) return mid;
        else if (target < nums[mid]) {
            return recursiveBinarySearch(nums, low, mid-1, target);
        }
        else {
            return recursiveBinarySearch(nums, mid+1, high, target);
        }
    }

    int search(vector<int>& nums, int target) {
        //return iterativeBinarySearch(nums, target);
        return recursiveBinarySearch(nums, 0, nums.size()-1, target);
    }
};