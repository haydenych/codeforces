#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    
    cout << fixed << setprecision(0);
    
    if (k > ceil(1.0 * n / 2)) {
        cout << (ll)2 * (k - ceil(1.0 * n / 2)) << endl;
    } else {
        cout << (ll)2 * k - 1 << endl;
    }
}

int main() {
    solve();
}
