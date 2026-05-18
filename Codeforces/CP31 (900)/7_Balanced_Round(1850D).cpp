#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int cur = 1;
        int mx = 1;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] <= k)
                cur++;
            else
                cur = 1;
            mx = max(mx, cur);
        }
        cout << n - mx << endl;
    }
    return 0;
}