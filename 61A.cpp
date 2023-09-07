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
    string a, b;
    cin >> a >> b;
    
    for (int i = 0; i < a.length(); ++i) {
        cout << ((int)(a[i] - '0') ^ (int)(b[i] - '0'));
    }
    cout << endl;
}

int main() {
    solve();
}
