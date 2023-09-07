#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    
    string s;
    cin >> s;
    
    int cx = sx;
    int cy = sy;
    int res = -1;
    
    for (int i = 0; i < s.length(); ++i) {
        if (cx == ex && cy == ey) {
            res = i;
            break;
        }
        
        if (cy >= ey && s[i] == 'N') continue;
        if (cy <= ey && s[i] == 'S') continue;
        if (cx <= ex && s[i] == 'W') continue;
        if (cx >= ex && s[i] == 'E') continue;
        
        if (s[i] == 'N') ++cy;
        else if (s[i] == 'S') --cy;
        else if (s[i] == 'W') --cx;
        else if (s[i] == 'E') ++cx;
    }
    
    if (res == -1) res = s.length();
    if (cx == ex && cy == ey) cout << res << endl;
    else cout << -1 << endl;
}

int main() {
    solve();
}
