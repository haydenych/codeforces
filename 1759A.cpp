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
    
    string t = "Yes";
    int c;
    for (int i = 0; i < 3; ++i) {
        if (s[0] == t[i]) {
            c = i;
            break;
        }
    }
    
    bool f = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[c++]) {
            f = false;
            break;
        }
        
        c %= 3;
    }
    
    cout << (f ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
