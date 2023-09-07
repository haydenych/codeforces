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
    string a, b;
    cin >> a >> b;
    
    bool res = true;
    if (a.length() != b.length()) {
        res = false;
    } else {
        int diffCnt = 0;
        char dA, dB;
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] != b[i]) {
                if (diffCnt == 0) {
                    diffCnt++;
                    dA = a[i];
                    dB = b[i];
                } else if (diffCnt == 1 && a[i] == dB && b[i] == dA) {
                    diffCnt++;
                } else {
                    res = false;
                    break;
                }
            }
        }
        
        if (diffCnt != 2) res = false;
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
