#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int k = 0;
        for(int i = 1; i<= n; i++){
            if(n % i == 0){
                k++;
            }
            else{
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}