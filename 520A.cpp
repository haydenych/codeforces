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

char asciiToLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - ('Z' - 'z');
    } else {
        return c;
    }
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    set<char> ss;
    for (char c : s) {
        ss.insert(asciiToLower(c));
    }
    
    cout << (ss.size() == 26 ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
