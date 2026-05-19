#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 3 == 0) c0++;
            else if(x % 3 == 1) c1++;
            else c2++;
        }
        int ops = 0;
        ops += c0;
        int pairs = min(c1, c2);
        ops += pairs;
        c1 -= pairs;
        c2 -= pairs;
        ops += c1 / 3;
        ops += c2 / 3;
        cout << ops << endl;
    }
    return 0;
}