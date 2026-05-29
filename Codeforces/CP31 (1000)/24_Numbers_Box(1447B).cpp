#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long sumAbs = 0;
        int neg = 0;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x;
                cin >> x;
                sumAbs += abs(x);
                mn = min(mn, abs(x));
                if(x < 0) neg++;
            }
        }
        if(neg % 2 == 0){
            cout << sumAbs << endl;
        }
        else{
            cout << sumAbs - 2LL * mn << endl;
        }
    }
    return 0;
}