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

int count(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 2;
        n = n >> 1;
    }
    
    return res;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> v(m + 1);
    for (int i = 0; i < m + 1; ++i) {
        cin >> v[i];
    }
    
    int res = 0;
    for (int i = 0; i < m; ++i) {
        if (count(v[i] ^ v[m]) <= k) {
            ++res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
