class Solution {
public:
    long long power(long long a, long long b){
        long long mod = 1000000007;
        long long ans = 1;
        while(b){
            if(b & 1) ans = (ans * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long mod = 1000000007;
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long ans = power(5, even);
        ans = (ans * power(4, odd)) % mod;
        return ans;
    }
};