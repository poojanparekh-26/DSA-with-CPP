#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> used(n+1, 0);
        long long ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j += i){
                if(s[j-1] == '1') break;
                if(!used[j]){
                    ans += i;
                    used[j] = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}