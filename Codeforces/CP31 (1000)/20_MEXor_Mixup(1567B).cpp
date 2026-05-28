#include<bits/stdc++.h>
using namespace std;

long long findXor(long long n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long x = findXor(a - 1);
        if(x == b){
            cout << a << endl;
        }
        else if((x ^ b) == a){
            cout << a + 2 << endl;
        }
        else{
            cout << a + 1 << endl;
        }
    }
    return 0;
}