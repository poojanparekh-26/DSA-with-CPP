#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        map<int,int> ma, mb;
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                cnt++;
            }
            else{
                ma[a[i - 1]] = max(ma[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        ma[a[n - 1]] = max(ma[a[n - 1]], cnt);
        cnt = 1;
        for(int i = 1; i < n; i++){
            if(b[i] == b[i - 1]){
                cnt++;
            }
            else{
                mb[b[i - 1]] = max(mb[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        mb[b[n - 1]] = max(mb[b[n - 1]], cnt);
        int ans = 0;
        for(auto x : ma) ans = max(ans, x.second + mb[x.first]);
        for(auto x : mb) ans = max(ans, x.second + ma[x.first]);
        cout << ans << endl;
    }
    return 0;
}