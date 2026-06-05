class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            int mis = arr[mid] - mid - 1;
            if(mis < k) low = mid + 1;
            else high = mid - 1;
        }
        return low + k;
    }
};
//DERIVATION
/*
ans = arr[high]+more
ans = arr[high] + (k - missing)
ans = arr[high] + k - (arr[high] - high - 1)
ans = k + (high + 1)
ans = k + low
*/
