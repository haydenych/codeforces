#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    ll n, c, d;
    cin >> n >> c >> d;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    // incomplete
    ll tsum = 0;
    for (int i = n - 1; i >= max(n - d, (ll)0); --i) {
        tsum += v[i];
    }
    
    if (tsum >= c) {
        cout << "Infinity" << endl;
        return;
    }
    
    if (v[n - 1] * d < c) {
        cout << "Impossible" << endl;
        return;
    }
    
    // suffix sum
    // k < d
    
    vector<ll> s(n);
    ll sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        sum += v[i];
        s[i] = sum;
    }
    
    int res = d;
    // n - 2, d - 1 ?
    // min(n - 1, d)
    for (int k = 0; k <= d; ++k) {
        int r = d % (k + 1);
//        cout << "r " << r << endl;
        ll cc = 0;
        
        if (r == 0) {
//            cout << s[max(n - k - 1, (ll)0)] << " " << (d / (k + 1)) << endl;
            cc = s[max(n - k - 1, (ll)0)] * (d / (k + 1));
        } else {
//            cout << s[max(n - r, (ll)0)] << endl;
            cc = s[max(n - r, (ll)0)] * ceil(1.0 * d / (k + 1)) + (s[max(n - k - 1, (ll)0)] - s[max(n - r, (ll)0)]) * floor(1.0 * d / (k + 1));
        }
//        cout << cc << endl;
        
        if (cc < c) {
            res = k - 1;
            break;
        }
    }
    
    if (res == d) {
        // Should not happen
        cout << "Infinity" << endl;
    } else {
        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




