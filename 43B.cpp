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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    map<char, int> m;
    for (char c : s1) {
        if (c != ' ') {
            m[c]++;
        }
    }
    
    bool res = true;
    for (char c : s2) {
        if (c != ' ') {
            m[c]--;
            
            if (m[c] < 0) {
                res = false;
                break;
            }
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
