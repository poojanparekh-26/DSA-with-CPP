#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        if(s < b * k || s > b * k + (k - 1) + (n - 1) * (k - 1)){
            cout << -1 << endl;
            continue;
        }
        vector<long long> a(n, 0);
        a[0] = b * k;
        s -= b * k;
        for(int i = 0; i < n; i++){
            long long add = min(s, k - 1);
            a[i] += add;
            s -= add;
        }
        for(auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}