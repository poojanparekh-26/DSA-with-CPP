#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        int mismatch = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != a[n-i-1][n-j-1]){
                    mismatch++;
                }
            }
        }
        mismatch /= 2;
        if(mismatch > k) cout << "No" << endl;
        else{
            int extra = k - mismatch;
            if(n % 2 == 1) cout << "Yes" << endl;
            else{
                if(extra % 2 == 0)cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }

    return 0;
}