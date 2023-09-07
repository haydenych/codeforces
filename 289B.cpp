#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int m, n, d;
    cin >> m >> n >> d;
    
    vector<int> v(m * n);
    for (int i = 0; i < m * n; ++i) {
        cin >> v[i];
    }
    
    bool valid = true;
    for (int i = 1; i < m * n; ++i) {
        if (valid && abs(v[i] - v[i - 1]) % d != 0) {
            valid = false;
            break;
        }
    }
    
    sort(v.begin(), v.end());
    int median = v[(int)v.size() / 2];
    
    if (valid) {
        int res = 0;
        for (int i = 0; i < m * n; ++i) {
            res += abs(v[i] - median) / d;
        }
        
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    solve();
}
