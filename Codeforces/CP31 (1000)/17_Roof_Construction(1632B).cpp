#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p = 1;
        while(p * 2 < n){
            p *= 2;
        }
        for(int i = p - 1; i >= 0; i--){
            cout << i << " ";
        }
        for(int i = p; i < n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}