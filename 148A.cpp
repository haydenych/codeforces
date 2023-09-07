#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    
    int res = 0;
    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            ++res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
