#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int freq2 = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0) freq2++;
        }
        if(freq2==0) {
            cout << 1 << endl;
            continue;
        }
        if(freq2%2==1) cout << -1 << endl;
        else{
            int i=0, half = freq2/2;
            while(i<n && freq2>half){
                if(a[i]%2==0) freq2--;
                i++;
            }
            cout << i << endl;
        }
    }
    return 0;
}