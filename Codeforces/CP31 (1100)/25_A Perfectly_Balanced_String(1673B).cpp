#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        set<char> st;
        for(char c : s) st.insert(c);
        int k = st.size();
        vector<int> last(26, -1);
        bool ok = true;
        for(int i = 0; i < s.size(); i++){
            int c = s[i] - 'a';
            if(last[c] != -1){
                if(i - last[c] != k){
                    ok = false;
                    break;
                }
            }
            last[c] = i;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}