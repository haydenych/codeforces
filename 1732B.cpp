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
    
    string s;
    cin >> s;
    
    int res = 0;
    for (char c : s) {
        cout << c << " " << res << endl;
        if ((c == '0' && res % 2 == 0) || (c == '1' && res % 2 == 1)) {
            ++res;
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
