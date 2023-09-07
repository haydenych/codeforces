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
    int n = 5;
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> g[i][j];
        }
    }
    
    int res = 0;
    
    vector<int> o{0, 1, 2, 3, 4};
    do {
        res = max(res, g[o[0]][o[1]] + g[o[1]][o[0]] + 2 * g[o[2]][o[3]] + 2 * g[o[3]][o[2]] +
                       g[o[1]][o[2]] + g[o[2]][o[1]] + 2 * g[o[3]][o[4]] + 2 * g[o[4]][o[3]] );
    } while(next_permutation(o.begin(), o.end()));
    
    cout << res << endl;
}

int main() {
    solve();
}
