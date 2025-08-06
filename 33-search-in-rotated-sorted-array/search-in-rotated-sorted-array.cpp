class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int pivot = -1;
        int index1 = -1;
        int index2 = -1;

        while (low <= high) {
            int mid = low + ((high-low)/2);
            if (arr[mid]< arr[n-1]) {
                high = mid-1;
            }
            else if (arr[mid]>arr[n-1]) {
                pivot = mid;
                low = mid+1;
            }
            else {
                break;
            }
        }

        //cout << pivot << endl;
        low = 0;
        high = (pivot == -1) ? n-1 : pivot;
        //cout << low << " " << high ;
        while (low <= high) {
            int mid = low + ((high-low)/2);
            if (arr[mid] == target) {
                index1 = mid;
                break;
            }
            else if (arr[mid] > target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        //cout << index1;
        if (pivot == -1) return index1;

        low = pivot+1 ;
        high =  n-1 ;
        //cout << low << " " << high ;
        while (low <= high) {
            int mid = low + ((high-low)/2);
            if (arr[mid] == target) {
                index2 = mid;
                break;
            }
            else if (arr[mid] > target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        return (index1 == -1) ? index2 : index1;
        //return 0;
    }
};