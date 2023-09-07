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
    
    if (n == 3) {
        cout << "NO" << endl;
        return;
    }
    
    int a, b;
    
    cout << "YES" << endl;
    if (n % 2 == 0) {
        a = 1;
        b = -1;
    } else {
        a = n / 2 - 1;
        b = -n / 2;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << (i % 2 == 0 ? a : b) << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
