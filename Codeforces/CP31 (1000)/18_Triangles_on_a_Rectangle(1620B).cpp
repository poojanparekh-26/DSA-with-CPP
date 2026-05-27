#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long w, h;
        cin >> w >> h;
        long long k1, k2, k3, k4;
        cin >> k1;
        vector<long long> x1(k1);
        for(long long i=0;i<k1;i++) cin >> x1[i];
        cin >> k2;
        vector<long long> x2(k2);
        for(long long i=0;i<k2;i++) cin >> x2[i];
        cin >> k3;
        vector<long long> y1(k3);
        for(long long i=0;i<k3;i++) cin >> y1[i];
        cin >> k4;
        vector<long long> y2(k4);
        for(long long i=0;i<k4;i++) cin >> y2[i];
        long long area = LLONG_MIN;
        area = max(area,(x1[k1-1]-x1[0])*h);
        area = max(area,(x2[k2-1]-x2[0])*h);
        area = max(area,(y1[k3-1]-y1[0])*w);
        area = max(area,(y2[k4-1]-y2[0])*w);
        cout << area << endl;
    }
    return 0;
}