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
    
    if (n % 2 == 1) {
        for (int i = 0; i < n; ++i) {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = 0; i < n - 2; ++i) {
        cout << 4 << " ";
    }
    cout << "2 6" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
