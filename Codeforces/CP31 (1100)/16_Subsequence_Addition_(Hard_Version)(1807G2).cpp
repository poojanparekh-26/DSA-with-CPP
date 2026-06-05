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
        vector<int> c(n);
        for(int i=0;i<n;i++) cin >> c[i];
        sort(c.begin(),c.end());
        if(c[0]!=1){
            cout << "No" << endl;
            continue;
        }
        long long sum = c[0];
        bool ans = true;
        for(int i=1;i<n;i++){
            if(c[i]>sum){
                ans = false;
                break;
            }
            else{
                sum+=c[i];
            }
        }
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}