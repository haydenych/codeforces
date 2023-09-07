#include <iostream>
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
    string s;
    cin >> s;
    
    string res;
    if (s.length() > 10) {
        res = s[0] + to_string((int)s.length() - 2) + s[(int)s.length() - 1];
    } else {
        res = s;
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
