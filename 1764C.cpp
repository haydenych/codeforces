#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    if (v[0] == v[n - 1]) {
        cout << n / 2 << endl;
        return;
    }
    
    vector<pair<int, int>> vp(n);
    int c = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == v[c]) {
            continue;
        }
        
        for (int j = c; j < i; ++j) {
            vp[j] = make_pair(c, i - 1);
        }
        
        c = i;
    }
    
    for (int j = c; j < n; ++j) {
        vp[j] = make_pair(c, n - 1);
    }
    
//    for (int i = 0; i < n; ++i) {
//        cout << vp[i].first << " " << vp[i].second << endl;
//    }
//    cout << endl;
    
    ll res = 0;
    for (int i = 1; i < n; ++i) {
        ll t = (ll)i * (n - i);
        if (v[i - 1] == v[i]) {
            if (v[i - 1] == v[0]) {
                t -= (ll)(i - vp[i].first - 1) * (vp[i].second - i + 1);
            } else if (v[i] == v[n - 1]) {
                t -= (ll)(i - vp[i].first) * (vp[i].second - i);
            } else {
                t -= (ll)(i - vp[i].first) * (vp[i].second - i + 1);
            }
        }
        
//        cout << i << " " << t << endl;
        res = max(res, t);
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
