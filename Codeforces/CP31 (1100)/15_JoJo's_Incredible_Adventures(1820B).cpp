#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        string T = s + s;
        int cnt=0, mx=0, n=s.size();
        for(int i=0;i<2*n;i++){
            if(T[i]=='1'){
                cnt++;
                mx = max(mx,cnt);
            }
            else{
                cnt=0;
            }
        }
        mx = min(mx,n);
        if(mx==n) cout << 1LL*n*n << endl;
        else if(mx % 2 == 0){
            cout << 1LL * (mx/2) * (mx/2 + 1) << endl;
        }
        else{
            cout << 1LL * ((mx+1)/2) * ((mx+1)/2) << endl;
        }
    }
    return 0;
}