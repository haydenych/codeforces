#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int count(int n) {
    int res = 0;
    int t = n;
    while (t % 2 != ((n + 1) % 2)) {
        t /= 2;
        ++res;
    }

    return res;
}

void solve() {
    int n;
    cin >> n;
    
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    
    if (sum % 2 == 0) {
        cout << 0 << endl;
        return;
    }
    
    int res = count(v[0]);
    for (int i = 1; i < n; ++i) {
        res = min(res, count(v[i]));
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
