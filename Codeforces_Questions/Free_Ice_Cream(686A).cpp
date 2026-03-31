#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, x;
    cin >> n >> x;
    long long distressed = 0;
    while(n--) {
        char op;
        long long d;
        cin >> op >> d;
        if(op == '+')
            x += d;
        else {
            if(x >= d)
                x -= d;
            else
                distressed++;
        }
    }
    cout << x << " " << distressed;
    return 0;
}