#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int num;
    cin >> num;
    int g = num;
    for (int i = 1; i < n; ++i) {
        cin >> num;

        g = gcd(g, num);
    }
    
    int res = 3;
    if (g == 1) {
        res = 0;
    }
    
    for (int i = n - 1; i >= n - 3 && i >= 0; --i) {
        if (gcd(g, i + 1) == 1) {
            res = min(res, n - i);
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
