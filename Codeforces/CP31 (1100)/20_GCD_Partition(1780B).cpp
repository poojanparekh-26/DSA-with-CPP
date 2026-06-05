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
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        long long pref = 0;
        long long ans = 1;
        for(int i=0;i<n-1;i++){
            pref += a[i];
            ans = max(ans, __gcd(pref, sum));
        }
        cout << ans << endl;
    }

    return 0;
}