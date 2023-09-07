#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <numeric>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    unordered_set<int> s;
    for (int i = a + 1; i <= c; ++i) {
        s.insert(i);
    }
    
    for (int j = b + 1; j <= d; ++j) {
        for (ll p = 1; p <= (c * j) / (a * b); ++p) {
            if (p * a * b % j == 0 && s.find(p * a * b / j) != s.end()) {
                cout << p * a * b / j << " " << j << endl;
                return;
            }
        }
    }
    
    cout << "-1 -1" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

