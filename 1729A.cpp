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
    int a, b, c;
    cin >> a >> b >> c;
    
    if (abs(a - 1) > abs(b - c) + abs(c - 1)) {
        cout << 2 << endl;
    } else if (abs(a - 1) < abs(b - c) + abs(c - 1)) {
        cout << 1 << endl;
    } else {
        cout << 3 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
