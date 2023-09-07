#include <iostream>
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
    string a, b;
    cin >> a >> b;
    
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    
    int res = a.compare(b);
    cout << (res <= 0 ? (res == 0 ? 0 : -1) : 1) << endl;
}

int main() {
    solve();
}
