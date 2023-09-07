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
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    if (v[0] == v[n - 1]) {
        cout << (ll)n * (n - 1) << endl;
        return;
    }
    
    int l = 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] == v[0]) {
            ++l;
        } else {
            break;
        }
    }
    
    int r = 1;
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] == v[n - 1]) {
            ++r;
        } else {
            break;
        }
    }
    
    cout << (ll)l * r * 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
