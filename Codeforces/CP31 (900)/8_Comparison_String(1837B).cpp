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
        int max_gc = 0, max_lc = 0;
        int gc = 0, lc = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='>'){
                gc++;
                max_lc = max(max_lc, lc);
                lc = 0;
            }
            else {
                lc++;
                max_gc = max(max_gc, gc);
                gc = 0;
            }
        }
        max_gc = max(max_gc, gc);
        max_lc = max(max_lc, lc);
        cout << max(max_gc, max_lc)+1 << endl;
    }
    return 0;
}