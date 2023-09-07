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
    
    string s;
    cin >> s;
    
    if (n % 3 == 2) {
        cout << "NO" << endl;
        return;
    }
    
    bool res = true;
    for (int i = 0; i < n / 3 && res; ++i) {
        if (s[3 * i + 1] != s[3 * i + 2]) {
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
