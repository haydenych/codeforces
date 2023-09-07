#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string a, b;
    cin >> a >> b;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == 'G') {
            a[i] = 'B';
        }
        
        if (b[i] == 'G') {
            b[i] = 'B';
        }
    }
    
    cout << (a.compare(b) == 0 ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
