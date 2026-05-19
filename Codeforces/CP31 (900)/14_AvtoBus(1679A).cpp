#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n%2==1 || n < 4){
            cout << -1 << endl;
            continue;
        }
        long long x = n/4;
        long long y = 0;
        if(n%6==0){
            y = n/6;
        }
        else{
            y = n/6 + 1;
        }
        cout << y << " " << x << endl;
    }
    return 0;
}