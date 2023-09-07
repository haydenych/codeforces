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
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0) {
                cout << '#';
            } else if (i % 4 == 1) {
                cout << (j == m - 1 ? '#' : '.');
            } else {
                cout << (j == 0 ? '#' : '.');
            }
        }
        cout << endl;
    }
}

int main() {
    solve();
}
