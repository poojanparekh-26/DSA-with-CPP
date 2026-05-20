#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, tt;
        cin >> s >> tt;
        vector<int> req(26, 0);
        for(char c : tt){
            req[c - 'A']++;
        }
        string res = "";
        for(int i = s.size() - 1; i >= 0; i--){
            if(req[s[i] - 'A'] > 0){
                res += s[i];
                req[s[i] - 'A']--;
            }
        }
        reverse(res.begin(), res.end());
        if(res == tt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}