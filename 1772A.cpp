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
    
    cout << (s[0] - '0') + (s[2] - '0') << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
