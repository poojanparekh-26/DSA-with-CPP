#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n;
        int digits = 0;
        while(temp > 0){
            temp /= 10;
            digits++;
        }
        int first = n;
        while(first >= 10)
            first /= 10;
        int ans = first + (digits - 1) * 9;
        cout << ans << endl;
    }
}