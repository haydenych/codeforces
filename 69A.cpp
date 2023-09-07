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
    
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> v[i][j];
        }
    }
    
    bool res = true;
    for (int i = 0; i < 3 && res; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += v[j][i];
        }
        
        if (sum != 0) {
            res = false;
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
