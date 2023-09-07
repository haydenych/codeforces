#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

ll countInv(vector<int>& v) {
    int n = v.size();
    ll res = 0;
    int cnt = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] == 1) {
            ++cnt;
            res += n - cnt - i;
        }
    }
    
    return res;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    ll res = -1;
    res = max(res, countInv(v));
    
    vector<int> a = v;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            a[i] = 1;
            break;
        }
    }
    

    res = max(res, countInv(a));

    vector<int> b = v;
    for (int i = n - 1; i >= 0; --i) {
        if (b[i] == 1) {
            b[i] = 0;
            break;
        }
    }
    
    res = max(res, countInv(b));
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




