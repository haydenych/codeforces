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
    string s;
    cin >> s;
    
    int n = s.length();
    
    if (s[1] == 'a') {
        cout << s.substr(0, 1) << " " << s.substr(1, 1) << " " << s.substr(2, n - 2) << endl;
    } else {
        cout << s.substr(0, 1) << " " << s.substr(1, n - 2) << " " << s.substr(n - 1, 1) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
