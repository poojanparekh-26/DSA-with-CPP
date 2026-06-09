class Solution {
public:
    int myAtoi(string s) {
        long long a = 0;
        int n = s.size();
        bool neg = false;
        bool num = false;
        for(int i = 0; i < n; i++){
            if(s[i] == ' ' && !num) continue;
            else if(s[i] == '-' && !num){
                neg = true;
                num = true;
            }
            else if(s[i] == '+' && !num) num = true;
            else if(!isdigit(s[i])) break;
            else{
                num = true;
                a = 10 * a + (s[i] - '0');
                if(!neg && a > INT_MAX) return INT_MAX;
                if(neg && a > (long long)INT_MAX + 1) return INT_MIN;
            }
        }
        if(neg) return -a;
        return a;
    }
};