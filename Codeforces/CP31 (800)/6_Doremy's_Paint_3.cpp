#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        if(mp.size() > 2){
            cout << "NO"<<endl;
        }
        else if(mp.size() == 1){
            cout << "YES"<<endl;
        }
        else{
            auto it = mp.begin();
            int count1 = it->second;
            it++;
            int count2 = it->second;

            if(abs(count1 - count2) <= 1){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }
    }
    return 0;
}