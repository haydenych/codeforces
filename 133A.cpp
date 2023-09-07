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
    
    bool res = false;
    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            res = true;
        }
        
        if (res) {
            break;
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
