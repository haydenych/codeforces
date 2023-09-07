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
    int n, x;
    cin >> n >> x;
    
    int c = 1;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        
        c += (l - c) / x * x;
        res += (r + 1 - c);
        c = r + 1;
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
