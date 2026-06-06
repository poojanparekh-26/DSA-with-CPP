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
        int and_sum=INT_MAX;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin >> p[i];
            if(p[i]!=i) and_sum &= i;
        }
        cout << and_sum << endl;
    }

    return 0;
}