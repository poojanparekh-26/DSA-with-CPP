#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int l = 0;
    int r = n - 1;
    int wins = 0;
    while(l <= r){
        long long req = d / p[r] + 1;
        if(req > (r - l + 1)){
            break;
        }
        wins++;
        l += req - 1;
        r--;
    }
    cout << wins << endl;
    return 0;
}