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

ll fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}

ll nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    
    int cnt1 = 0;
    int cnt2 = 0;
    int cntQ = 0;
    
    
    for (char c : s1) {
        cnt1 = c == '+' ? cnt1 + 1 : cnt1 - 1;
    }
    
    for (char c : s2) {
        if (c == '+') {
            ++cnt2;
        } else if (c == '-') {
            --cnt2;
        } else {
            ++cntQ;
        }
    }
    
    int d = abs(cnt1 - cnt2);
    if (d == 0 && cntQ == 0) {
        cout << fixed << setprecision(9) << 1 << endl;
    } else if (d > cntQ || (cntQ + d) % 2 == 1) {
        cout << fixed << setprecision(9) << 0 << endl;
    } else {
        cout << fixed << setprecision(9) << 1.0 * nCr(cntQ, (cntQ + d) / 2) / pow(2, cntQ) << endl;
    }
}

int main() {
    solve();
}
