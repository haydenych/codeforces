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
    
    int l = 0;
    int r = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        l = (a == 1) ? l + 1 : l - 1;
        r = (b == 1) ? r + 1 : r - 1;
    }
    
//    cout << l << " " << r << endl;
    cout << min(abs(n - l), abs(l + n)) / 2 + min(abs(n - r), abs(r + n)) / 2 << endl;
}

int main() {
    solve();
}
