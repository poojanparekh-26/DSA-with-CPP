#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        vector<pair<int,int>> moves = {
            { a,  b},
            { a, -b},
            {-a,  b},
            {-a, -b},
            { b,  a},
            { b, -a},
            {-b,  a},
            {-b, -a}
        };
        set<pair<int,int>> king;
        set<pair<int,int>> queen;
        for(auto move : moves){
            king.insert({xk + move.first, yk + move.second});
            queen.insert({xq + move.first, yq + move.second});
        }
        int ans = 0;
        for(auto pos : king){
            if(queen.count(pos))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}