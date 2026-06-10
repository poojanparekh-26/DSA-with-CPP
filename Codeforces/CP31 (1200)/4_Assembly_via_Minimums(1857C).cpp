#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long m = n * (n - 1) / 2;
        vector<long long> b(m);
        for(long long i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<long long> a;
        int idx = 0;
        for(long long cnt = n - 1; cnt >= 1; cnt--){
            a.push_back(b[idx]);
            idx += cnt;
        }
        a.push_back(a.back());
        for(long long i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    }

    return 0;
}