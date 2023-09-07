#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string res;
    for (char c : s) {
        res = c + res;
    }
    
    res = s + res;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
