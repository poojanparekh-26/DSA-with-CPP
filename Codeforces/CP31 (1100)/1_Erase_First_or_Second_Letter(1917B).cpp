#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        long long ans = 0;
        for(auto c:s){
            st.insert(c);
            ans+=st.size();
        }
        cout << ans << endl;
    }
    return 0;
}