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
    
    ll f;
    cin >> f;
    
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] <= f) {
            continue;
        }
        
        f = ceil(1.0 * (f + v[i]) / 2);
    }
    
    cout << f << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
