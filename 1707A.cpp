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
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    vector<int> res(n, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= q) {
            res[i] = 1;
        }
    }
    
    int c = q;
    int m = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (res[i] == 1) m = max(m, a[i]);
        if (res[i] == 0 && c > m) {
            --c;
            res[i] = 1;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << res[i];
    }
    cout << endl;
}

// 6 2
// 1 1 1 1 3 2

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
