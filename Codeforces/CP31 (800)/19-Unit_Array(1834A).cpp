#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pos = 0;
        int neg = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > 0) pos++;
            else if(a[i] < 0) neg++;
        }
        if(pos > neg){
            if(neg%2==0){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else if(pos==neg){
            if(neg%2==0){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else{
            int ans = (neg-pos+1)/2;
            if((neg-ans)%2 == 0){
                cout << ans << endl;
            }
            else{
                cout << ans+1 << endl;
            }
        }
    }
    return 0;
}