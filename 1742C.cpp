#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    vector<string> v(8);
    for (int i = 0; i < 8; ++i) {
        cin >> v[i];
    }
    
    bool red = false;
    for (int i = 0; i < 8; ++i) {
        bool f = true;
        for (char c : v[i]) {
            if (c != 'R') {
                f = false;
                break;
            }
        }
        
        red = red || f;
    }
    
    cout << (red ? "R" : "B") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




