#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    vector<int> tm(n, 0);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    long long allVal = 0;
    int currTime = 0;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int ind;
            long long x;
            cin >> ind >> x;
            ind--;
            long long old;
            if(tm[ind] < currTime) old = allVal;
            else old = a[ind];
            sum = sum - old + x;
            a[ind] = x;
            tm[ind] = currTime;
        }
        else{
            long long x;
            cin >> x;
            currTime++;
            allVal = x;
            sum = 1LL * n * x;
        }
        cout << sum << endl;
    }
    return 0;
}