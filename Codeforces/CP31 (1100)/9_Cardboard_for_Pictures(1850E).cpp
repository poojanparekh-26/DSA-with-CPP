#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, c;
        cin >> n >> c;
        vector<long long> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        long long l = 0, r = 1e9;
        long long ans = 0;
        while(l <= r){
            long long w = (l + r) / 2;
            __int128 area = 0;
            for(long long x : s){
                __int128 side = x + 2*w;
                area += side * side;
            }
            if(area <= c){
                ans = w;
                l = w + 1;
            }
            else{
                r = w - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}