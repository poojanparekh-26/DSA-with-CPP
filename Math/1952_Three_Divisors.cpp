class Solution {
public:
    bool isThree(int n) {
        bool isprime = false;
        if(n<=2) return false;
        for(int i=2;i<n+1/2;i++){
            if(n%i==0){
                if(i*i == n) isprime=true;
                else isprime=false;
            }
        }
        return isprime;
    }
};