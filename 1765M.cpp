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

int smallestDivisor(int n) {
    int res = -1;
    for (int i = 2; i <= n * n; ++i) {
        if (n % i == 0) {
            res = i;
            break;
        }
    }
    
    return res;
}

void solve() {
    int n;
    cin >> n;
    
    int s = smallestDivisor(n);
    if (s == -1) {
        cout << 1 << " " << n - 1 << endl;
    } else {
        cout << n / s << " " << n - n / s << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
