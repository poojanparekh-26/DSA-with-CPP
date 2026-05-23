#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        vector<pair<int,int>> people(n);
        for(int i = 0; i < n; i++){
            cin >> people[i].second;
        }
        for(int i = 0; i < n; i++){
            cin >> people[i].first;
        }
        sort(people.begin(), people.end());
        long long ans = p;
        int informed = 1;
        for(int i = 0; i < n; i++){
            if(informed >= n) break;
            if(people[i].first >= p) break;
            int canTake = min(people[i].second, n - informed);
            ans += 1LL * canTake * people[i].first;
            informed += canTake;
        }
        ans += 1LL * (n - informed) * p;
        cout << ans << endl;
    }
    return 0;
}