#include <iostream>
#include <iomanip>
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
    int n, l;
    cin >> n >> l;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    double res = max(v[0], l - v[n - 1]);
    for (int i = 1; i < n; ++i) {
        res = max(res, 1.0 * (v[i] - v[i - 1]) / 2);
    }
    
    cout << fixed << setprecision(12) << res << endl;
}

int main() {
    solve();
}
