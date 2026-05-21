#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        int arrayand = a[0];
        for(int i=1;i<n;i++){
            cin >> a[i];
            arrayand &= a[i];
        }
        cout << arrayand << endl;
    }
    return 0;
}