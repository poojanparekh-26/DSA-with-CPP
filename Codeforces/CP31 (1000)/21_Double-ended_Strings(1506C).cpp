#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int best = 0;
        for(int i = 0; i < a.size(); i++){
            string sub = "";
            for(int j = i; j < a.size(); j++){
                sub += a[j];
                if(b.find(sub) != string::npos){
                    best = max(best, (int)sub.size());
                }
            }
        }
        int ans = a.size() + b.size() - 2 * best;
        cout << ans << endl;
    }
    return 0;
}