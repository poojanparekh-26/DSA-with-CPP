#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long d;
        cin >> d;
        long long p1 = 1 + d;
        while(!isPrime(p1)){
            p1++;
        }
        long long p2 = p1 + d;
        while(!isPrime(p2)){
            p2++;
        }
        cout << p1 * p2 << endl;
    }
    return 0;
}