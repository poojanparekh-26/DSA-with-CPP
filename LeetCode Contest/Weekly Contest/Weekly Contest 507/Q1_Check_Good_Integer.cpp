class Solution {
public:
    int maxDistance(string moves) {
        long long x = 0, y = 0;
        long long k = 0;
        for (char c : moves) {
            if (c == 'R') x++;
            else if (c == 'L') x--;
            else if (c == 'U') y++;
            else if (c == 'D') y--;
            else k++; // '_'
        }
        return abs(x) + abs(y) + k;
    }
};