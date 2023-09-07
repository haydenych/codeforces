#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int r, g, b;
    cin >> r >> g >> b;
    
    int m = min(min(r, g), b);
    int res = m + (r - m) / 3 + (g - m) / 3 + (b - m) / 3;
    
    if ((   (r % 3 == 2 && g % 3 == 2 && b == m) ||
            (r % 3 == 2 && b % 3 == 2 && g == m) ||
            (b % 3 == 2 && g % 3 == 2 && r == m)) &&
        !(r % 3 == 2 && b % 3 == 2 && g % 3 == 2) &&
        m != 0) {
        res += 1;
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
