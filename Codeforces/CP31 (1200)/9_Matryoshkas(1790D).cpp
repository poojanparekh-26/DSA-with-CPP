#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        map<int,int> freq;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        int ans = 0;
        while(!freq.empty()){
            int x = freq.begin()->first;
            ans++;
            while(freq.count(x)){
                freq[x]--;
                if(freq[x] == 0) freq.erase(x);
                x++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}