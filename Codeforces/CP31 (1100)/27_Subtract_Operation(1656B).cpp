#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = 0;
        int r = 1;
        bool ans = false;
        while(r < n){
            int diff = a[r] - a[l];
            if(diff == k){
                ans = true;
                break;
            }
            if(diff < k) r++;
            else{
                l++;
                if(l == r) r++;
            }
        }
        if(ans)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}