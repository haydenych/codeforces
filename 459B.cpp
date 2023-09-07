#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

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

    ll min_cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] != v[0]) {
            break;
        }
        
        ++min_cnt;
    }
    
    ll max_cnt = 1;
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] != v[n - 1]) {
            break;
        }
        
        ++max_cnt;
    }
    
    if (v[0] == v[n - 1]) cout << 0 << " " << (ll)n * (n - 1) / 2 << endl;
    else cout << v[n - 1] - v[0] << " " << min_cnt * max_cnt << endl;
}

int main() {
    solve();
}
