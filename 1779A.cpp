#include <iostream>
#include <iomanip>
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
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    bool allL = true;
    bool allR = true;
    int firstR = -1;
    int lastL = 0;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            lastL = i;
            allR = false;
        }
        
        if (s[i] == 'R') {
            if (firstR == -1) firstR = i;
            allL = false;
        }
    }
    
    if (allL || allR) {
        cout << -1 << endl;
        return;
    }

    if (firstR < lastL) {
        cout << 0 << endl;
        return;
    }
    
    cout << lastL + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
