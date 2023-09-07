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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a < b && c < d && a < c && b < d) ||
        (c < a && d < b && c < d && a < b) ||
        (d < c && b < a && d < b && c < a) ||
        (b < d && a < c && b < a && d < c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
