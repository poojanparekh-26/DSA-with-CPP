/*
Derivation:
Let f(n) be the maximum score for an n x n grid.
Instead of computing f(n) directly, consider the extra contribution
when increasing the grid from size (n-1) x (n-1) to n x n.
For layer n:
Contribution = n^2 + n(n-1)
             = 2n^2 - n
Therefore,
f(n) = Σ(2i^2 - i)
     = 2Σi^2 - Σi
Using standard formulas:
Σi   = n(n+1)/2
Σi^2 = n(n+1)(2n+1)/6

Substituting,
f(n) = 2 * n(n+1)(2n+1)/6 - n(n+1)/2
    = n(n+1)[(4n+2)/6 - 3/6]
    = n(n+1)(4n-1)/6

The problem asks for: 2022 * f(n) mod (1e9+7)
Answer: 2022 * n(n+1)(4n-1)/6 mod (1e9+7)

Since division under modulo is not allowed,
use modular inverse of 6:

inv6 = 166666668
*/
#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const long long INV6 = 166666668;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long ans = n % MOD;
        ans = ans * ((n + 1) % MOD) % MOD;
        ans = ans * ((4LL * (n % MOD) - 1) % MOD) % MOD;
        ans = ans * INV6 % MOD;
        ans = ans * 2022 % MOD;
        cout << ans << endl;
    }

    return 0;
}