#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long gcd_diff = 0;
        for(int i=0;i<n/2;i++){
            gcd_diff = __gcd(gcd_diff, abs(a[i] - a[n-i-1]));
        }
        cout << gcd_diff << endl;
    }
    return 0;
}