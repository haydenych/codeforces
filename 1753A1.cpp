#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    if (n % 2 == 1) {
        cout << -1 << endl;
        return;
    }
    
    vector<pair<int, int>> res;
    for (int i = 0; i < n / 2; ++i) {
        if (v[2 * i] != v[2 * i + 1]) {
            res.push_back(make_pair(2 * i + 1, 2 * i + 1));
            res.push_back(make_pair(2 * i + 2, 2 * i + 2));
        } else {
            res.push_back(make_pair(2 * i + 1, 2 * i + 2));
        }
    }
    
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i].first << " " << res[i].second << endl;
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
