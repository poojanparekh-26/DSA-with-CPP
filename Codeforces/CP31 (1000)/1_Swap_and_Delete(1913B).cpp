#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        for(char c : s){
            if(c == '0') zero++;
            else one++;
        }
        int keep = 0;
        for(char c : s){
            if(c == '0'){
                if(one > 0){
                    one--;
                    keep++;
                }
                else break;
            }
            else{
                if(zero > 0){
                    zero--;
                    keep++;
                }
                else break;
            }
        }
        cout << s.size() - keep << endl;
    }
    return 0;
}