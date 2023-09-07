#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    bool plus = s[0] != '1';
    string res = "";
    for (int i = 1; i < n; ++i) {
        if (s[i] == '0') {
            res += '+';
        } else {
            if (plus) {
                res += '+';
            } else {
                res += '-';
            }
            plus = !plus;
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
