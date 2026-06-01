#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long ans = 0;
        bool possible = true;
        while(a!=b){
            if(a>b){
                if(a>=b*8 && a%8==0){
                    a/=8;
                    ans++;
                }
                else if(a>=b*4 && a%4==0){
                    a/=4;
                    ans++;
                }
                else if(a>=b*2 && a%2==0){
                    a/=2;
                    ans++;
                }
                else{
                    possible = false;
                    break;
                }
            }
            else{
                if(a<=b/8){
                    a*=8;
                    ans++;
                }
                else if(a<=b/4){
                    a*=4;
                    ans++;
                }
                else if(a<=b/2){
                    a*=2;
                    ans++;
                }
                else{
                    possible = false;
                    break;
                }
            }
        }
        if(possible) cout << ans << endl;
        else cout << -1 <<  endl;
    }
    return 0;
}