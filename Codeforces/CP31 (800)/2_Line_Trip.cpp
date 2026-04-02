#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        cin >> arr[0];
        int maxdiff = arr[0];
        for(int i=1;i<n;i++){
            cin >> arr[i];
            maxdiff = max(maxdiff,arr[i]-arr[i-1]);
        }
        maxdiff = max(maxdiff,2*(x-arr[n-1]));
        cout << maxdiff << endl;
    }
    return 0;
}