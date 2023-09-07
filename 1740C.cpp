#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    if (v[0] == v[n - 1]) {
        cout << 0 << endl;
        return;
    }

    ll res = 0;
    for (int i = 0; i < n - 2; ++i) {
        res = max(res, v[n - 1] + v[i + 1] - 2 * v[i]);
    }
    
    for (int i = n - 1; i > 1; --i) {
        res = max(res, 2 * v[i] - v[0] - v[i - 1]);
    }
    
    cout << res << endl;
}

int main() {
	int t;
	cin >> t;
    while (t--) solve();
}



// 4
// 1 2 5 6
// 1 6 25 -> 6
// 1 56 2 -> 7
