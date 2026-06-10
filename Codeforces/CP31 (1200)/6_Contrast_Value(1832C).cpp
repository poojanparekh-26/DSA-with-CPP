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
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> b;
        b.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(a[i] != a[i - 1]){
                b.push_back(a[i]);
            }
        }
        if(b.size() == 1){
            cout << 1 << endl;
            continue;
        }
        int ans = 2;
        for(int i = 2; i < b.size(); i++){
            bool d1 = b[i - 1] > b[i - 2];
            bool d2 = b[i] > b[i - 1];
            if(d1 != d2) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}