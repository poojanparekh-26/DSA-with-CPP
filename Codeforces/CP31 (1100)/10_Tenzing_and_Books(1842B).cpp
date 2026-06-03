#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++) cin >> c[i];
        int cur = 0;
        for(int i=0;i<n;i++){
            if((a[i] | x) == x){
                cur |= a[i];
            }
            else break;
        }
        for(int i=0;i<n;i++){
            if((b[i] | x) == x){
                cur |= b[i];
            }
            else break;
        }
        for(int i=0;i<n;i++){
            if((c[i] | x) == x){
                cur |= c[i];
            }
            else break;
        }
        if(cur == x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}