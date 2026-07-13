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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> pref1(n), pref2(n);
        int c1 = 0, c2 = 0, c3 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) c1++;
            else if(a[i] == 2) c2++;
            else c3++;
            pref1[i] = c1 - c2 - c3;
            pref2[i] = c1 + c2 - c3;
        }

        vector<int> sufMax(n);
        sufMax[n - 2] = pref2[n - 2];
        for(int i = n - 3; i >= 0; i--) sufMax[i] = max(sufMax[i + 1], pref2[i]);
        bool ok = false;
        for(int i = 0; i <= n - 3; i++){
            if(pref1[i] >= 0 && sufMax[i + 1] >= pref2[i]){
                ok = true;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 
    return 0;
}