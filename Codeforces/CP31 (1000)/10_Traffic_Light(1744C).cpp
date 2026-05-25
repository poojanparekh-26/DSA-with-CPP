#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if(c == 'g'){
            cout << 0 << endl;
            continue;
        }
        string ns = s + s;
        int N = ns.size();
        int nextg = -1;
        int ans = 0;
        for(int i = N - 1; i >= 0; i--){
            if(ns[i] == 'g'){
                nextg = i;
            }
            if(ns[i] == c){
                ans = max(ans, nextg - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}