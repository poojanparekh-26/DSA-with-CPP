#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        vector<int> b, c;
        int mn = a[0];
        for(int x : a){

            if(x == mn)
                b.push_back(x);
            else
                c.push_back(x);
        }
        if(c.empty()){
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;
        for(int x : b)
            cout << x << " ";

        cout << endl;
        for(int x : c)
            cout << x << " ";

        cout << endl;
    }
    return 0;
}