#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int count0 = 0, count5 = 0;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        
        if(x == 0) count0++;
        else count5++;
    }
    
    if(count0 == 0){
        cout << -1;
        return 0;
    }
    
    int usable5 = (count5 / 9) * 9;
    
    if(usable5 == 0){
        cout << 0;
        return 0;
    }
    
    for(int i = 0; i < usable5; i++)
        cout << 5;
    
    for(int i = 0; i < count0; i++)
        cout << 0;
    
    return 0;
}