#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ans = INT_MIN;
        for(int i = 0; i < n - 1; i++){
            ans = max(ans, a[i] - a[i + 1]);
        }
        ans = max(ans, *max_element(a.begin(), a.end()) - a[0]);
        ans = max(ans, a[n - 1] - *min_element(a.begin(), a.end()));
        cout << ans << endl;
    }
    return 0;
}