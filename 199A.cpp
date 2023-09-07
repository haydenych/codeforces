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
    int n;
    cin >> n;
    
    if (n <= 2) {
        cout << "0 0 " << n << endl;
        return;
    }
    
    int a = 0;
    int b = 1;
    
    while (b != n) {
        int c = a + b;
        a = b;
        b = c;
    }
    
    cout << (2 * b - 3 * a) << " " << (2 * a - b) << " " << a << endl;
}

int main() {
    solve();
}
