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
    int n, x;
    cin >> n >> x;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int l = 0;
    int m = 0;
    int r = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] < x) {
            ++l;
        } else if (v[i] == x) {
            ++m;
        } else {
            r = n - m - l;
            break;
        }
    }
    
//    cout << l << " " << m << " " << r << endl;
    if (m == 0) {
        if (l < r) {
            cout << r - l << endl;
        } else if (l == r) {
            cout << 1 << endl;
        } else {
            cout << l - r + 1 << endl;
        }
    } else {
        if ((l < r && l + m >= r) || (r < l && r + m > l) || l == r) {
            cout << 0 << endl;
        } else if (l + m < r) {
            cout << r - l - m << endl;
        } else {
            cout << l - r - m + 1 << endl;
        }
    }
}

int main() {
    solve();
}
