#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int k;
        cin >> k;
 
        int cnt = 0;
        bool ok = false;
 
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
 
            if(x >= 3){
                ok = true;
            }
 
            if(x >= 2){
                cnt++;
            }
        }
 
        if(ok || cnt >= 2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
 
    return 0;
}