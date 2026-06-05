class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(),weights.end(),0LL);
        long long ans = LLONG_MAX;
        while(low<=high){
            long long mid = low + (high - low)/2;
            int i = 0, d=1, rem=mid;
            while(i<n){
                if(rem>=weights[i]){
                    rem-=weights[i];
                }
                else{
                    d++;
                    rem = mid - weights[i];
                }
                i++;
            }
            if(d<=days){
                high = mid - 1;
                ans = min(ans,mid);
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};