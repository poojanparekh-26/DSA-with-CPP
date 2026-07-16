#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        long long score = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            score += a[i] - c;
        }
        reverse(a.begin(), a.end());
        sort(a.begin(), a.end());
        long long benefit = 0;
        for(int i = 0; i < n / 2; i++){
            if(c - a[i] > 0) benefit += c - a[i];
            else break;
        }
        cout << score + benefit << endl;
    }
    return 0;
}