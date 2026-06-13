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
        vector<string> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int ans = 0;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<(n+1)/2;j++){
                int ones = 0;
                ones += a[i][j] - '0';
                ones += a[j][n-1-i] - '0';
                ones += a[n-1-i][n-1-j] - '0';
                ones += a[n-1-j][i] - '0';
                ans += min(ones, 4 - ones);
            }
        }
        cout << ans << endl;
    }

    return 0;
}