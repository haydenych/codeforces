#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int res = 0;
    if (a < b) ++res;
    if (a < c) ++res;
    if (a < d) ++res;
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
