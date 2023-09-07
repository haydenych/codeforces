#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string curr;
    for (char c : s) {
        curr += c;
        if (curr == ".") {
            curr = "";
            cout << 0;
        } else if (curr == "-.") {
            curr = "";
            cout << 1;
        } else if (curr == "--") {
            curr = "";
            cout << 2;
        }
    }
}

int main() {
    solve();
}
