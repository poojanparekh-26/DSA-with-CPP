#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;
        long long need = k * (y + 1) - 1;
        long long stickTrades = (need + (x - 2)) / (x - 1);
        cout << stickTrades + k << endl;
    }
    return 0;
}