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
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> last(1001, -1);
        int ans = -1;
        for(int i=0;i<n;i++){
            last[a[i]]=i+1;
        }
        for(int i=1;i<1001;i++){
            for(int j=1;j<1001;j++){
                if(__gcd(i,j)==1 && last[i]!=-1 && last[j]!=-1){
                    ans = max(ans,last[i]+last[j]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}