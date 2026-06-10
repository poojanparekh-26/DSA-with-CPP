#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long noAI = (n + (x + y) - 1) / (x + y);
        long long withAI;
        long long maximOnly = (n + x - 1) / x;
        if (maximOnly <= z) withAI = maximOnly;
        else{
            long long written = x * z;
            long long rem = n - written;
            withAI = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
        }
        cout << min(noAI, withAI) << endl;
    }
    return 0;
}