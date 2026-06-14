class Solution {
public:
    bool checkGoodInteger(int n) {
        long long sum = 0, sqsum = 0;
        while(n>0){
            int d = n%10;
            sum += d;
            sqsum += d*d;
            n = n/10;
        }
        if(sqsum - sum >= 50) return true;
        else return false;
    }
};