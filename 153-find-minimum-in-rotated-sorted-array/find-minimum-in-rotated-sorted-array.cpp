class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();

        int low = 0;
        int high = n-1;
        int pivot = -1;

        while (low <= high) {
            int mid = low + ((high-low)/2);

            if (arr[mid] >= arr[0]) {
                pivot = mid;
                low = mid+1;
            }
            else if (arr[mid] < arr[0]) {
                high = mid-1;
            }

        }
        return arr[(pivot+1)%n];
    }
};