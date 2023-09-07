#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    map<char, int> m;
    for (char c : s) {
        m[c]++;
    }
    
    bool odd = false;
    int res = 0;
    for (auto [k, v] : m) {
        if (v % 2 == 1) {
            if (!odd) {
                odd = true;
            } else {
                ++res;
            }
        }
    }
    
    cout << (res % 2 == 0 ? "First" : "Second") << endl;
}

int main() {
    solve();
}
