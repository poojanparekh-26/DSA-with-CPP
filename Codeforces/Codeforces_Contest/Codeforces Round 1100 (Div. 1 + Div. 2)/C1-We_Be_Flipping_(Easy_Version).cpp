#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<int> ops;
        int flips = 0;
        for(int i = n; i >= 1; i--){
            long long val = a[i];
            if(flips % 2) val = -val;
            if(val > 0){
                ops.push_back(i);
                flips++;
            }
        }
        cout << ops.size() << endl;
        for(int x : ops){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}