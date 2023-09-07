#include <iostream>
#include <string>
#include <cstring>
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
    
    if (n % 2 == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            cout << (i % 2 == 1 ? i + 1 : i - 1) << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
}
