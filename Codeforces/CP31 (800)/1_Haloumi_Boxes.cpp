#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        bool ans = true;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        if(k>1){
            cout << "YES" << endl;
        }
        else{
            for(int i=1;i<n;i++){
                if(arr[i]<arr[i-1])
                {
                    cout << "NO" << endl;
                    ans = false;
                    break;
                }
            }
            if(ans) cout << "YES" << endl;
        }
    }
    return 0;
}