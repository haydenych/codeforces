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
    
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    sort(h.begin(), h.end());
    
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (h[i] == 1) {
            ++c;
        } else {
            break;
        }
    }
    
    int res = c / 2 + n - (c / 2 * 2);
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
