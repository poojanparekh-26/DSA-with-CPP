#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        long long ans = 0;
        for(int j = 0; j < m; j++){
            vector<long long> col;
            for(int i = 0; i < n; i++) col.push_back(a[i][j]);
            sort(col.begin(), col.end());
            for(int i = 0; i < n; i++) ans += col[i] * (2LL * i - n + 1);
        }
        cout << ans << endl;
    }

    return 0;
}