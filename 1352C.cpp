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
    ll n, k;
    cin >> n >> k;
    
    cout << n * ((k - 1) / (n - 1)) + ((k - 1) % (n - 1)) + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
