#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, r, b;
        cin >> n >> r >> b;
        int base = r / (b + 1);
        int extra = r % (b + 1);
        string ans = "";
        for(int i = 0; i < b + 1; i++){
            int cnt = base;
            if(extra > 0){
                cnt++;
                extra--;
            }
            while(cnt--){
                ans += 'R';
            }
            if(i != b){
                ans += 'B';
            }
        }
        cout << ans << endl;
    }    
    return 0;
}