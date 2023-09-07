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

    if (a > b) {
        cout << "First" << endl;
    } else if (a < b) {
        cout << "Second" << endl;
    } else {
        cout << (c % 2 == 1 ? "First" : "Second") << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
