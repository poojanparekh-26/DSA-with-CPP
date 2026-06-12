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
        vector<long long> x(n), y(n), diff(n);
        for(int i=0;i<n;i++) cin >> x[i];
        for(int i=0;i<n;i++){
            cin >> y[i];
            diff[i] = y[i] - x[i];
        }
        int ans = 0;
        sort(diff.begin(),diff.end());
        int l = 0, r = n-1;
        while(l<r){
            if(diff[l]+diff[r]>=0){
                ans++;
                l++,
                r--;
            }
            else{
                l++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}