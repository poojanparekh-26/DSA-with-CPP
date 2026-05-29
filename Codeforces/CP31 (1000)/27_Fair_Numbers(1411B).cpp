#include<bits/stdc++.h>
using namespace std;

bool fair(long long n){
    long long temp = n;
    while(temp){
        int d = temp % 10;
        if(d != 0 && n % d != 0){
            return false;
        }
        temp /= 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        while(!fair(n)){
            n++;
        }
        cout << n << endl;
    }
    return 0;
}