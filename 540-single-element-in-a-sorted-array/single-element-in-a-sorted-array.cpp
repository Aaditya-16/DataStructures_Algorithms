class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;

        while (low < high) {
            int mid = low + (high-low)/2;

            if (mid % 2 == 0 && arr[mid+1]==arr[mid] || mid % 2 != 0 && arr[mid-1]==arr[mid]) {
                low = mid+1;
            }
            else {
                high = mid;
            }
        }
        return arr[low];
    }
};