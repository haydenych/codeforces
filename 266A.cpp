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
    int n;
    cin >> n;

    string s;
    cin >> s;
        
    int res = 0;
    char prev = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] == prev) res++;
        prev = s[i];
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
