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
    int n, a, b;
    cin >> n >> a >> b;
    
    if (a > b) {
        cout << 1 << endl;
        return;
    }
    
    cout << fixed << setprecision(0) << ceil(1.0 * n / a) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
