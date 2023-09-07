#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n <= 10 || n > 21) {
        cout << 0 << endl;
    } else if (n == 20) {
        cout << 15 << endl;
    } else {
        cout << 4 << endl;
    }
}

int main() {
    solve();
}
