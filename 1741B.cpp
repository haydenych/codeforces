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
    
    if (n == 3) {
        cout << -1 << endl;
        return;
    }
    
    if (n % 2 == 0) {
        for (int i = n; i > 0; --i) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        for (int i = n; i > ceil(1.0 * n / 2); --i) {
            cout << i << " ";
        }
        
        for (int i = 1; i <= ceil(1.0 * n / 2); ++i ) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
