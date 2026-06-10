#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n,x,y;
        cin >> n >> x >> y;
        long long l = lcm(x,y);
        long long pos = n/x - n/l;
        long long neg = n/y - n/l;
        long long largest = pos * (2*n - pos + 1) / 2;
        long long smallest = neg * (neg + 1) / 2;
        cout << largest - smallest << endl;
    }

    return 0;
}