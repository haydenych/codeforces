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
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    
    bool isSorted = true;
    for (int i = 1; i < n && isSorted; ++i) {
        if (p[i - 1] > p[i]) {
            isSorted = false;
        }
    }
    
    if (isSorted) {
        cout << 0 << endl;
        return;
    }
    
    vector<int> a(n + 1);
    for (int i = 0; i < n; ++i) {
        a[p[i]] = i;
    }
    
    int c = 0;
    int i, j;
    if (n % 2 == 1) {
        i = n / 2 + 1;
        j = n / 2 + 1;
    } else {
        i = n / 2;
        j = n / 2 + 1;
    }
    
    while (i >= 0) {
        if (a[i] > a[j]) {
            break;
        }
        
        if (c != 0 && (a[i] > a[i + 1] || a[j] < a[j - 1])) {
            break;
        }
        
        ++c;
        --i;
        ++j;
    }
    
    int res = (n + 1) / 2 - c;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
