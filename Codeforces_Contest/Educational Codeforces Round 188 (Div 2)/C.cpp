#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)}{
        long long a,b,c,m;
        cin >> a >> b >> c >> m;
        long long al=0,bl=0,cl=0;
        for(long long i=0; i<m; i++){
            if(i%a==0 && i%b!=0 i%c!=0) al+=6;
            if(i%a!=0 && i%b==0 i%c!=0) bl+=6;
            if(i%a!=0 && i%b!=0 i%c==0) cl+=6;
            if(i%a==0 && i%b==0 i%c!=0) {
                al+=3;
                bl+=3;
            }
            if(i%a==0 && i%b!=0 i%c==0) {
                al+=3;
                cl+=3;
            }
            if(i%a!=0 && i%b==0 i%c==0) {
                bl+=3;
                cl+=3;
            }
            if(i%a==0 && i%b==0 i%c==0) {
                al+=2;
                bl+=2;
                cl+=2;
            }
        }
        cout << al << bl << cl << endl;
    }
    return 0;
}