#include <iostream>
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
    int n, m;
    cin >> n >> m;
    
    ll curr = 1;
    ll res = 0;
    for (int i = 0; i < m; ++i) {
        ll a;
        cin >> a;
        res += (a >= curr ? a - curr : n - curr + a);
        curr = a;
        
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
