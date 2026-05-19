#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;
        long long cost = 0;
        cost += (n / 3) * min(b, 3 * a);
        long long rem = n % 3;
        cost += min(b, rem * a);
        cout << cost << endl;
    }
    return 0;
}