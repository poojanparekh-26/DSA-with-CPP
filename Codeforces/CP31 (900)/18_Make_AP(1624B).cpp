#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        bool ok = false;
        long long newA = 2*b - c;
        if(newA > 0 && newA % a == 0)
            ok = true;
        long long sum = a + c;
        if(sum % 2 == 0){
            long long newB = sum / 2;
            if(newB % b == 0)
                ok = true;
        }
        long long newC = 2*b - a;
        if(newC > 0 && newC % c == 0)
            ok = true;
        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}