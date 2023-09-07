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
    
    int res = -1;
    int m = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        if (a > m) {
            res = i + 1;
            m = a;
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
