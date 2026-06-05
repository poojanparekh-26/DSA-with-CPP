#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n),cost(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            cost[i]=a[i]+i+1;
        }
        if(c==1){
            cout << 0 << endl;
            continue;
        }
        sort(cost.begin(),cost.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(cost[i]>c) break;
            else{
                count++;
                c-=cost[i];
            }
        }
        cout << count << endl;
    }

    return 0;
}