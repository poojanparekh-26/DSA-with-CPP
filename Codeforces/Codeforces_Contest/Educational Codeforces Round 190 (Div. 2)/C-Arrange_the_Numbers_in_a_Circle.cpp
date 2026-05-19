#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> c(n);
        int ans = 0;
        int singles = 0;
        int maxf = 0;
        int oddfreq = 0;
        int oddi = 0;
        int pairs = 0;
        int evenfreq = 0;
        int dominants = 0;
        for(int i = 0; i < n; i++){
            cin >> c[i];
            if(c[i] == 1){
                singles++;
            }
            if(c[i]%2 == 1 && c[i] > 1){
                oddfreq++;
                oddi = i;
            }
            if(c[i]%2 == 0 && c[i] > 0){
                evenfreq++;
            }
            maxf = max(maxf, c[i]);
        }
        if(oddfreq > 0){
            c[oddi]-=3;
            ans+=4;
            singles-=1;
            for(int i = 0; i < n; i++){
                if(c[i] > 1){
                    pairs += c[i]/2;
                    dominants+=c[i];
                }
            }
            ans+=dominants;
            if(singles >= pairs){
                ans+=pairs*2;
            }
            else{
                ans+=singles;
            }
            cout << ans << endl;
        }
        else{
            for(int i = 0; i < n; i++){
                if(c[i] > 0){
                    pairs += c[i]/2;
                    dominants+=c[i];
                }
            }
            ans+=3;
            pairs-=2;
            if(singles >= pairs){
                ans+=dominants;
            }
            else{
                ans+=singles;
            }
            cout << ans << endl;
        }
    }
    return 0;
}