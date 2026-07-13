#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<long long> freq;
        long long cnt = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                cnt++;
            }
            else{
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);
        sort(freq.begin(), freq.end());
        int m = freq.size();
        long long sum = 0;
        for(long long x : freq){
            sum += x;
        }
        int ans = 0;
        for(int i = 0; i < m; i++){
            if(i == 0 || freq[i] != freq[i - 1]){
                long long rem = m - i;
                long long diff = k - sum;
                if(diff % rem == 0){
                    long long shift = diff / rem;
                    if(freq[i] + shift >= 1){
                        ans++;
                    }
                }
            }
            sum -= freq[i];
        }
        cout << ans << endl;
    }
 
    return 0;
}