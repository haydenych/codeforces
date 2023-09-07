#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    
    if (sum < s) {
        cout << -1 << endl;
        return;
    } else if (sum == s) {
        cout << 0 << endl;
        return;
    }
    
    vector<int> pv(n + 1);
    pv[0] = 0;
    for (int i = 1; i < n + 1; ++i) {
        pv[i] = pv[i - 1] + v[i - 1];
    }
    
    int res = n;
    int i = 0;
    int j = 0;
    while (j <= n) {
        if (pv[j] - pv[i] == s) {
//            cout << i << " " << j << endl;
            res = min(n - j + i, res);
            ++j;
        } else if (pv[j] - pv[i] > s) {
            ++i;
        } else {
            ++j;
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
