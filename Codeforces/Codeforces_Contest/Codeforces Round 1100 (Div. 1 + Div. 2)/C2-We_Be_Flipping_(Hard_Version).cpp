#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        vector<int> s(n + 1);
        vector<long long> w(n + 1);
        vector<long long> s_val(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s[i] = (a[i] > 0 ? 1 : 0);
            w[i] = abs(a[i]);
            s_val[i] = (s[i] == 1 ? w[i] : 0);
        }        
        vector<long long> p(n + 1, 0);
        for(int i = 1; i <= n; i++){
            p[i] = p[i - 1] + w[i];
        }
        vector<long long> suf(n + 2, 0);
        for(int i = n; i >= 1; i--){
            suf[i] = suf[i + 1] + s_val[i];
        }
        long long max_sum = suf[1];
        int best_k = -1;
        for(int k = 1; k <= n; k++){
            if(s[k] == 1){
                long long cand_sum = p[k - 1] + suf[k + 1];
                if(cand_sum > max_sum){
                    max_sum = cand_sum;
                    best_k = k;
                }
            }
        }
        vector<int> target = s;
        if(best_k != -1){
            for(int i = 1; i < best_k; i++){
                target[i] = 1;
            }
            target[best_k] = 0;
        }
        vector<int> X;
        for(int i = n; i >= 1; i--){
            int next_s = (i + 1 <= n ? s[i + 1] : 0);
            int next_t = (i + 1 <= n ? target[i + 1] : 0);
            int c = s[i] ^ next_s;
            int c_prime = target[i] ^ next_t;
            if(c != c_prime){
                X.push_back(i);
            }
        }
        deque<int> dq;
        for(int i : X){
            if(s[i] == 1){
                dq.push_front(i);
            } 
            else {
                int temp = dq.front();
                dq.pop_front();
                dq.push_front(i);
                dq.push_front(temp);
            }
        }
        cout << dq.size() << "\n";
        for(int x : dq){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}