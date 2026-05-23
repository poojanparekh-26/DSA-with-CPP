#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sumSecond = 0;
        int globalMin = INT_MAX;
        int minSecond = INT_MAX;
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            vector<int> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            globalMin = min(globalMin, a[0]);
            minSecond = min(minSecond, a[1]);
            sumSecond += a[1];
        }
        cout << sumSecond - minSecond + globalMin << endl;
    }
    return 0;
}