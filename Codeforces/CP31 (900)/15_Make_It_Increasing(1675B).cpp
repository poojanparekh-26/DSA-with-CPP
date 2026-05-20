#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ops = 0;
        bool possible = true;
        for(int i = n - 2; i >= 0; i--){
            while(a[i] >= a[i + 1]){
                if(a[i] == 0){
                    possible = false;
                    break;
                }
                a[i] /= 2;
                ops++;
            }
            if(!possible)
                break;
        }
        if(possible)
            cout << ops << endl;

        else
            cout << -1 << endl;
    }
    return 0;
}