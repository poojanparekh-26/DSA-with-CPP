#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long d = abs(a - b);
        long long moves = min(a % d, d - (a % d));
        cout << d << " " << moves << endl;
    }
    return 0;
}