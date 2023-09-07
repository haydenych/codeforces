#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    double x, y, z;
    x = sqrt(1.0 * a * b / c);
    y = 1.0 * a / x;
    z = 1.0 * b / x;
    
//    cout << x << y << z << endl;
    cout << int(4 * (x + y + z)) << endl;
}

int main() {
    solve();
}
