#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        long long mx = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx += (a[i] + x - 1) / x;
            sum += a[i];
        }
        long long mn = (sum + x - 1) / x;
        cout << mn << " " << mx << endl;
    }
    return 0;
}