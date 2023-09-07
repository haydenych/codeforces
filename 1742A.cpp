#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << (((a + b) == c || (a + c) == b || (b + c) == a) ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




