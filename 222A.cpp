#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    bool valid = true;
    for (int i = k; i < n; ++i) {
        if (v[i] != v[k - 1]) {
            valid = false;
            break;
        }
    }
    
    if (valid) {
        int res = 0;
        for (int i = k - 2; i >= 0; --i) {
            if (v[i] != v[k - 1]) {
                res = i + 1;
                break;
            }
        }
        
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    solve();
}
