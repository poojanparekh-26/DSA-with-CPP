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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int l = 0, r = n-1, x, y;
        bool ans = true;
        while(l < r){
            if(a[l] == a[r]){
                l++;
                r--;
            }
            else{
                x = a[l];
                y = a[r];
                ans = false;
                break;
            }
        }
        if(ans){
            cout << "YES" << endl;
            continue;
        }
        int l1 = l, r1 = r;
        ans = true;
        while(l1<r1){
            if(a[l1]==x){
                l1++;
                continue;
            }
            if(a[r1]==x){
                r1--;
                continue;
            }
            if(a[l1]==a[r1]){
                ans = true;
                l1++;
                r1--;
            }
            else{
                ans = false;
                break;
            }
        }
        if(ans){
            cout << "YES" << endl;
            continue;
        }
        int l2 = l, r2 = r;
        ans = true;
        while(l2<r2){
            if(a[l2]==y){
                l2++;
                continue;
            }
            if(a[r2]==y){
                r2--;
                continue;
            }
            if(a[l2]==a[r2]){
                ans = true;
                l2++;
                r2--;
            }
            else{
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}