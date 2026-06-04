class Solution {
public:
    int countKthRoots(long long l, long long r, int k) {
        auto kthRoot = [&](long long n){
            if(n < 1)
                return 0LL;
            long long low = 1;
            long long high = 1e9;
            long long ans = 0;
            while(low <= high){
                long long mid = (low + high) / 2;
                long long res = 1;
                bool overflow = false;
                for(int i = 0; i < k; i++){
                    if(res > n / mid){
                        overflow = true;
                        break;
                    }
                    res *= mid;
                }
                if(!overflow && res <= n){
                    ans = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return ans;
        };
        int ans = kthRoot(r) - kthRoot(l - 1);
        if(l == 0)
            ans++;
        return ans;
    }
};