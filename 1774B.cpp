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
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    
    if (m < k) {
        cout << "NO" << endl;
        return;
    }
    
    for (int i = 0; i < m; ++i) {
        if ((v[i] - 1) * k + 1 > n) {
            cout << "NO" << endl;
            return;
        }
        
        if ((v[i] - 1) * k + 1 > (n / k) * k) {
            --n;
        }
    }
    
    cout << "YES" << endl;
    
    // 11 6
    // 23456123456
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
