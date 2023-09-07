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
        
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] += ('Z' - 'z');
    }
    
    cout << s << endl;
}

int main() {
    solve();
}
