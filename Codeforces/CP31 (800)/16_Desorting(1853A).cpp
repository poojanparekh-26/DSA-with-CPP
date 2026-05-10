    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector<int> a(n);
            bool sorted = true;
            int min_diff = INT_MAX;
            for(int i = 0; i < n; i++)
                cin >> a[i];

            for(int i = 1; i < n; i++){
                if(a[i] < a[i-1])
                    sorted = false;

                min_diff = min(min_diff, a[i] - a[i-1]);
            }
            if(!sorted)
                cout << 0 << endl;
            else
                cout << (min_diff / 2) + 1 << endl;
        }
        return 0;
    }