#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> p[i];
            ans = __gcd(ans, abs(p[i] - (i + 1)));
        }
        cout << ans << endl;
    }
    return 0;
}