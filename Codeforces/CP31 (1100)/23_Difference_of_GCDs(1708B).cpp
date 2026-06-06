#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> ansv;
        bool ans = true;
        for(int i=1;i<=n;i++){
            long long x = ((l + i - 1) / i) * i;
            if(x > r){
                ans = false;
                break;
            }
            ansv.push_back(x);
        }

        if(ans){
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                cout << ansv[i] << " ";
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}