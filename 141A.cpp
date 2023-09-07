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
    string s1, s2, t;
    cin >> s1 >> s2 >> t;
    
    map<char, int> m1;
    for (char c : s1) {
        m1[c]++;
    }
    
    for (char c : s2) {
        m1[c]++;
    }
    
    map<char, int> m2;
    for (char c : t) {
        m2[c]++;
    }
    
    bool res = true;
    for (auto [k, v] : m1) {
        if (m2.find(k) == m2.end() || v != m2[k]) {
            res = false;
        }
        
        m2.erase(k);
        
        if (!res) {
            break;
        }
    }
    
    res = m2.size() > 0 ? false : res;
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
