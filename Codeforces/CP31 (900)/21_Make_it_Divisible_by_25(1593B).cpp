#include<bits/stdc++.h>
using namespace std;

int solve(string s, string t){
    int n = s.size();
    int j = 1;
    int deletions = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == t[j]){
            j--;
            if(j < 0)
                return deletions;
        }
        else{
            deletions++;
        }
    }
    return 1e9;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 1e9;
        ans = min(ans, solve(s, "00"));
        ans = min(ans, solve(s, "25"));
        ans = min(ans, solve(s, "50"));
        ans = min(ans, solve(s, "75"));
        cout << ans << endl;
    }
    return 0;
}