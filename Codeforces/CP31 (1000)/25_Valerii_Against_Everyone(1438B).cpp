#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        bool ok = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(s.count(a[i])){
                ok = true;
            }
            s.insert(a[i]);
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}