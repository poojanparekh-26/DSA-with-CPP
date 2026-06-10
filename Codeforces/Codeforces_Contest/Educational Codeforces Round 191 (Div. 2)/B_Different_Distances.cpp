#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
            b[i] = n - i;
        }
        if(n % 2){
            int m = (n + 1) / 2;
            int idx1 = n - m - 1;
            int idx2 = n - m;
            swap(b[idx1], b[idx2]);
        }
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        for(int i = 0; i < n; i++) cout << b[i] << ' ';
        for(int i = 0; i < n; i++) cout << b[i] << ' ';
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    }

    return 0;
}