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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int x = a[n-1], len=1;
        for(int i=n-2;i>=0;i--){
            if(a[i] == x) len++;
            else break;
        }
        int ans = 0;
        while(len < n){
            if(a[n-len-1]!=x){
                len *= 2;
                ans++;
            }
            else len++;
        }
        cout << ans << endl;
    }

    return 0;
}