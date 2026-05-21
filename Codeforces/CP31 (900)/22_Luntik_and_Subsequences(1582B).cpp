#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ones = 0;
        long long zeros = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1) ones++;
            if(x == 0) zeros++;
        }
        cout << ones * (1LL << zeros) << endl;
    }
    return 0;
}