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

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> res(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = n * j + i + 1;
        }
    }
    
    if (n > 2) {
        int t = res[n - 2][n - 1];
        res[n - 2][n - 1] = res[n - 1][n - 1];
        res[n - 1][n - 1] = t;
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
