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
    string s;
    cin >> s;
    
    bool f = false;
    bool isRXCY = false;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            f = true;
        }
        
        if (f && (c < '0' || c > '9')) {
            isRXCY = true;
            break;
        }
    }
    
    if (isRXCY) {
        string a = "";
        string b = "";
        for (char c : s) {
            if (c >= '0' && c <= '9') {
                b += c;
            } else {
                a = b;
                b = "";
            }
        }
        
        int t = stoi(b) - 1;
        string res;
        while (t > 0) {
            res = string(1, ('A' + t % 26)) + res;
            t /= 26;
        }
        
        res += a;
        cout << res << endl;
    } else {
        string a = "";
        string b = "";
        for (char c : s) {
            if (c < '0' || c > '9') {
                a += c;
            } else {
                b += c;
            }
        }
        
        int t = 0;
        for (char c : a) {
            t = t * 26 + c - 'A' + 1;
        }
        
        string res = "R" + b + "C" + to_string(t);
        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
