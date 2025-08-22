class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        //////O(n) Approach/////////
        // arr.emplace_back(INT_MIN);
        // int n = arr.size();
        // int index = 0;

        // for (int i = 1; i < n; i++) {
        //     if (arr[i]<=arr[index]) {
        //         return index;
        //     }
        //     else {
        //         index = i;
        //     }
        // }

        // return index;

        arr.emplace_back(INT_MIN);
        int n = arr.size();
        int low = 0;
        int high = n-1;

        while (low <= high) {
            int mid = (low + (high-low)/2);

            if (mid == 0) {
                if (arr[mid+1]<=arr[mid]) return mid;
                else {
                    low = mid+1;
                    continue;
                }
            }

            if (arr[mid]>arr[mid-1] && arr[mid]>=arr[mid+1]) {
                return mid;
            }
            else {
                if (arr[mid+1]>arr[mid]) {
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
            }
        }

        return -1;


    }
};
