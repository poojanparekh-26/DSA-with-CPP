#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<int> c(n);
        for(int i = 0; i < n; i++){
            c[i] = min(a[i], b[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, c[i]);
        }
        cout << ans << endl;
    }
    return 0;
}