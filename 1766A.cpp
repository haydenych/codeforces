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
    int n;
    cin >> n;
    
    int l = 0;
    int d = 0;
    while (n > 0) {
        ++d;
        l = n % 10;
        n /= 10;
    }
    
    cout << (d - 1) * 9 + l << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
