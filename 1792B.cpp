#include <iostream>
#include <iomanip>
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (a == 0) {
        cout << 1 << endl;
        return;
    }
    
    int res = a;

    int t = min(b, c);
    res += 2 * t;
    b -= t;
    c -= t;
    
    res += min(a + 1, b + c + d);
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
