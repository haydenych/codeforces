#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(1001, -1);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        v[a] = i + 1;
    }
    
    int res = -1;
    for (int i = 0; i < 1001; ++i) {
        if (v[i] == -1) continue;
        for (int j = 0; j < 1001; ++j) {
            if (v[j] == -1) continue;
            if (gcd(i, j) == 1) res = max(res, v[i] + v[j]);
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




