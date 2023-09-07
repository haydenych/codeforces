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
    int n, k;
    cin >> n >> k;
    
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = make_pair(p[i], h[i]);
    }
    
    sort(v.begin(), v.end());
    
    int dmg = k;
    int currk = k;
    
    int i = 0;
    while (i < n && currk > 0) {
        if (v[i].second > dmg) {
            currk -= v[i].first;
            dmg += max(currk, 0);
        } else {
            ++i;
        }
    }
    
//    cout << currk << endl;
    
    bool res = true;
    for (int i = 0; i < n; ++i) {
        if (v[i].second > dmg) {
            res = false;
            break;
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
