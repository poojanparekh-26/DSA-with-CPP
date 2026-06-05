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
        long long sum=0, mn=LLONG_MAX;;
        int neg=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<0){
                neg++;
            }
            mn=min(mn,1LL*abs(a[i]));
            sum += abs(a[i]);
        }
        if(neg%2 == 0) cout << sum << endl;
        else cout << sum - 2*mn << endl;
    }

    return 0;
}