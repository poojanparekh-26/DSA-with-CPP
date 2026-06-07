class Solution {
public:
    long long sumOfGoodIntegers(int n, int k) {
        long long sum = 0;
        for(int x = max(1, n - k); x <= n + k; x++) {
            if((x & n) == 0) sum += x;
        }
        return sum;
    }
};