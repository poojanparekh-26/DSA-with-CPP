#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        long long d = abs(x1 - x2);
        d = min(d, n - d);
        if(n%2==1 && d == (n-1)/2) cout << d + k - 2 << endl;
        else {
            if(n<=4 && d == n/2) cout << 1 << endl;
            else cout << d + k << endl;
        }
    }
    return 0;
}