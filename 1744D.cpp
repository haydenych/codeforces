#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int cnt(int n) {
    int res = 0;
    while (n % 2 == 0) {
        n /= 2;
        ++res;
    }
    
    return res;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(101, 0);
    for (int i = 1; i <= n; ++i) {
        ++v[cnt(i)];
    }
    
    int t = n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        t -= cnt(a);
    }
    
    int res = 0;
    for (int i = 100; i >= 1 && t > 0; --i) {
        if (v[i] > 0) {
            res += min(v[i], t / i);
            t -= i * min(v[i], t / i);
        }
    }
    
    if (t > 0) res = -1;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

