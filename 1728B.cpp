#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 1) {
        cout << 1 << " ";
        for (int i = 2; i <= n - 2; ++i) {
            cout << (i % 2 == 0 ? i + 1 : i - 1)  << " ";
        }
        cout << n - 1 << " " << n << endl;
    } else {
        for (int i = 1; i <= n - 2; ++i) {
            cout << (i % 2 == 1 ? i + 1 : i - 1)  << " ";
        }
        cout << n - 1 << " " << n << endl;
    }
    

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
