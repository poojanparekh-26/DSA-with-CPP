#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long ans = LLONG_MAX;
        for(int x = 0; x <= 30; x++){
            long long nb = b + x;
            if(nb == 1) continue;
            long long temp = a;
            long long ops = x;
            while(temp > 0){
                temp /= nb;
                ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << endl;
    }
    return 0;
}