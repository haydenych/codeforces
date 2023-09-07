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
    
    int g = v[0];
    for (int i = 1; i < n; ++i) {
        g = gcd(v[i], g);
    }
    
    sort(v.begin(), v.end());
    cout << v[n - 1] / g << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
