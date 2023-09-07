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
    
    sort(v.begin(), v.end());
    
    bool res = true;
    for (int i = 1; i < n && res; ++i) {
        if (v[i] <= v[i - 1]) {
            res = false;
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




