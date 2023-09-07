#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin >> s;
        
    int cnt = 0;
    for (char c : s) {
        if (c == '4' || c == '7') cnt++;
    }
    
    cout << ((cnt == 4 || cnt == 7) ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
