class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        bool neg = false;
        long new_n = n;
        if(n<0){
            neg = true;
            new_n = -1LL*n;
        }

        while(new_n>0){
            if(new_n%2==1){
                ans = ans * x;
                new_n--;
            }
            else{
                x = x*x;
                new_n/=2;
            }
        }
        if(neg) return (1.0)/ans;
        else return ans;
    }
};