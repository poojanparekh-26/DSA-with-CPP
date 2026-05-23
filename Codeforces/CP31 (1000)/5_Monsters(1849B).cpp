#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            int rem = x % k;
            if(rem == 0) rem = k;
            v.push_back({-rem, i + 1});
        }
        sort(v.begin(), v.end());
        for(auto x : v) cout << x.second << " ";
        cout << endl;
    }
    return 0;
}