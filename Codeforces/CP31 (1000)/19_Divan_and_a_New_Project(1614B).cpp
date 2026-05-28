#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<long long,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        vector<long long> pos(n + 1);
        long long dist = 1;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                pos[a[i].second + 1] = dist;
            }
            else{
                pos[a[i].second + 1] = -dist;
                dist++;
            }
            ans += 2LL * abs(pos[a[i].second + 1]) * a[i].first;
        }
        cout << ans << endl;
        cout << 0 << " ";
        for(int i = 1; i <= n; i++){
            cout << pos[i] << " ";
        }
        cout << endl;
    }
    return 0;
}