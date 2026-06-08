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
        long long g1 = 0;
        long long g2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i % 2 == 0) g1 = __gcd(g1, a[i]);
            else g2 = __gcd(g2, a[i]);
        }
        bool ans1 = true;
        for(int i = 1; i < n; i += 2){
            if(a[i] % g1 == 0){
                ans1 = false;
                break;
            }
        }
        if(ans1){
            cout << g1 << endl;
            continue;
        }
        bool ans2 = true;
        for(int i = 0; i < n; i += 2){
            if(a[i] % g2 == 0){
                ans2 = false;
                break;
            }
        }
        if(ans2) cout << g2 << endl;
        else cout << 0 << endl;
    }
    return 0;
}