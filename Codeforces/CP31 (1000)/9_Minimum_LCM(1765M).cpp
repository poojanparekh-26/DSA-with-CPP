#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long d = 1;
        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                d = n / i;
                break;
            }
        }
        cout << d << " " << n - d << endl;
    }
    return 0;
}