#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int cnt = 0;
    for (char c : s) cnt = (c >= 'a' && c <= 'z') ? cnt + 1 : cnt - 1;
    
    
    for (int i = 0; i < s.length(); ++i) {
        if (cnt >= 0 && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] -= ('Z' - 'z');
        } else if (cnt < 0 && s[i] >= 'a' && s[i] <= 'z') {
            s[i] += ('Z' - 'z');
        }
    }
    
    cout << s << endl;
}

int main() {
    solve();
}
