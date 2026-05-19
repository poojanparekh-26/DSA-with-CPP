#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a;
        int n;
        cin >> a >> n;
        long long d1, d2;
        cin >> d1 >> d2;
        long long ans = LLONG_MAX;
        string sa = to_string(a);
        for(int len = 1; len <= 18; len++){
            auto make_b = [&](vector<int>& digits){
                long long b = 0;
                for(int d : digits)
                    b = b * 10 + d;
                return b;
            };
            {
                vector<int> digits(len, d1);
                if(len > 1 && d1 == 0)
                    digits[0] = d2;
                ans = min(ans, abs(a - make_b(digits)));
            }
            {
                vector<int> digits(len, d2);
                ans = min(ans, abs(a - make_b(digits)));
            }
            if(len == (int)sa.size()){
                for(int i = 0; i < len; i++){
                    vector<int> prefix;
                    bool ok = true;
                    for(int j = 0; j < i; j++){
                        int cur = sa[j] - '0';
                        if(cur == d1)
                            prefix.push_back(d1);
                        else if(cur == d2)
                            prefix.push_back(d2);
                        else{
                            ok = false;
                            break;
                        }
                    }
                    if(!ok)
                        break;
                    for(int choice = 0; choice < 2; choice++){
                        long long dig;
                        if(choice == 0)
                            dig = d1;
                        else
                            dig = d2;
                        if(i == 0 && len > 1 && dig == 0)
                            continue;
                        for(int fill = 0; fill < 2; fill++){
                            long long filldig;
                            if(fill == 0)
                                filldig = d1;
                            else
                                filldig = d2;
                            vector<int> digits = prefix;
                            digits.push_back(dig);
                            for(int j = i + 1; j < len; j++)
                                digits.push_back(filldig);
                            long long b = make_b(digits);
                            if(b >= 0)
                                ans = min(ans, abs(a - b));
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}