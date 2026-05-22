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
        int moves = min(zero, one);
        if(moves % 2) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
    return 0;
}