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
    
    if (a > b && a > c) {
        cout << (b > c ? b : c) << endl;
    } else if (b > a && b > c) {
        cout << (a > c ? a : c) << endl;
    } else {
        cout << (a > b ? a : b) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




