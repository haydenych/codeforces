#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    cout << (n == 1 || (a + b + 2 <= n) || (n == a && a == b) ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
