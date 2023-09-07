#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int binSearch(const vector<ll> v, int t) {
    int l = 0;
    int r = (int)v.size() - 1;
    int m;
    
    while (l <= r) {
        m = (l + r) / 2;
        if (v[m] <= t) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    
    return l;
}

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> sumV(n);
    vector<ll> maxV(n);
    cin >> sumV[0];
    maxV[0] = sumV[0];
    
    for (int i = 1; i < n; ++i) {
        ll a;
        cin >> a;
        
        sumV[i] = sumV[i - 1] + a;
        maxV[i] = max(maxV[i - 1], a);
    }
    
    vector<ll> res(q);
    
    int cIdx = -1;
    for (int i = 0; i < q; ++i) {
        int k;
        cin >> k;
        
        int r = binSearch(maxV, k);
        res[i] = (r == 0 ? 0 : sumV[r - 1]);
    }
    
    for (int i = 0; i < q; ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




