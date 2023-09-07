#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int l, r, x;
    cin >> l >> r >> x;
    
    int a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    
    if (abs(a - b) >= x) {
        cout << 1 << endl;
        return;
    }
    
    if (a + x > r && a - x < l) {
        cout << -1 << endl;
        return;
    }
    
    int toMin = abs(a - l) < x ? 2 : 1;
    int toMax = abs(a - r) < x ? 2 : 1;
    
    int res = 999;
    if (r - b >= x) {
        res = min(res, toMax + 1);
    }
    
    if (b - l >= x) {
        res = min(res, toMin + 1);
    }
    
    cout << (res == 999 ? -1 : res) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
