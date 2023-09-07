#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<string>> v(3, vector<string>(n));
    map<string, int> m;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
            m[v[i][j]]++;
        }
    }
    
    vector<int> res(3, 0);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            if (m[v[i][j]] == 1) {
                res[i] += 3;
            } else if (m[v[i][j]] == 2) {
                res[i] += 1;
            }
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
