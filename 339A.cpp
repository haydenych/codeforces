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
    
    map<int, int> m;
    for (char c : s) {
        if (c != '+') {
            m[c - '0']++;
        }
    }
    
    string res = "";
    for (int i = 1; i <= 3; ++i) {
        for (int j = 0; j < m[i]; ++j) {
            res += to_string(i) + "+";
        }
    }
    
    res.pop_back();
    cout << res << endl;
}

int main() {
    solve();
}
