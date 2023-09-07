#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b;
    
    c = b - a;
    
    int n;
    cin >> n;
    
    int res = 1;
    if ((n - 1) % 6 >= 3) {
        res *= -1;
    }
    
    if (n % 3 == 1) {
        res *= a;
    } else if (n % 3 == 2) {
        res *= b;
    } else {
        res *= c;
    }
    
    res = (res % 1000000007 + 1000000007) % 1000000007;
    cout << res << endl;
}

int main() {
    solve();
}
