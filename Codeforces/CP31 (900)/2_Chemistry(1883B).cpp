#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char,int> freq;
        for(char c : s)
            freq[c]++;
        int oddfreq = 0;
        for(auto it : freq){
            if(it.second % 2)
                oddfreq++;
        }
        if(oddfreq <= k + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}