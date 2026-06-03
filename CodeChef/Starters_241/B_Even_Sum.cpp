#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x % 2) odd++;
            else even++;
        }
        if ((sum % 2 == 0 && even > 0) || (sum % 2 == 1 && odd > 0)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}