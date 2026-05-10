#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ans = 0;
        bool found = false;
        for(int i = 0; i <= 6; i++){
            if(x.find(s) != string::npos){
                found = true;
                break;
            }
            x += x;
            ans++;
        }
        if(found)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}