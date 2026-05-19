#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int cnt4 = 0;
        for(char c : s){
            if(c == '4')
                cnt4++;
        }
        vector<int> pref(n + 1, 0);
        vector<int> suff(n + 1, 0);
        for(int i = 0; i < n; i++){
            pref[i + 1] = pref[i];
            if(s[i] == '1' || s[i] == '3')
                pref[i + 1]++;
        }
        for(int i = n - 1; i >= 0; i--){
            suff[i] = suff[i + 1];
            if(s[i] == '2')
                suff[i]++;
        }
        int ans = INT_MAX;
        for(int split = 0; split <= n; split++){
            ans = min(ans,pref[split] + suff[split]);
        }
        ans += cnt4;
        cout << ans << endl;
    }
    return 0;
}