#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        bool ok = true;
        for(auto x : mp){
            if(x.second.size() == 1){
                ok = false;
            }
        }
        if(!ok){
            cout << -1 << endl;
            continue;
        }
        vector<int> ans(n);
        for(auto x : mp){
            vector<int> v = x.second;
            int sz = v.size();
            for(int i = 0; i < sz; i++){
                ans[v[i]] = v[(i + 1) % sz] + 1;
            }
        }
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}