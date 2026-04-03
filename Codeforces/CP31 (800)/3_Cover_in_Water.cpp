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
        int count = 0;
        int conscount =0;
        bool ans = false;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
                conscount++;
                if(conscount>2){
                    ans = true;
                    break;
                }
            }
            else{
                conscount = 0;
            }
        }
        if(ans) cout << 2 << endl;
        else cout << count << endl;
    }
    return 0;
}