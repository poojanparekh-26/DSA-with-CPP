#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vl;

 
void solve(){
  ll n; 
  cin>>n; 
  vl v(n);
  for(auto &e : v) cin>>e;
  ll cc=0,maxi=0;
  for (ll i = 0; i < n; i++){
    if(v[i]==0){
        cc++; 
        maxi=max(cc,maxi);
    }
    else{
        maxi=max(maxi,cc); 
        cc=0;
    }
  } 
  cout<<maxi<<'\n';
}
 
int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}