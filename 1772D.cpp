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
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    bool isAsc = true;
    bool isDesc = true;
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] > a[i]) {
            isAsc = false;
        }
        
        if (a[i - 1] < a[i]) {
            isDesc = false;
        }
    }
    
    if (isAsc || isDesc) {
        cout << a[0] << endl;
        return;
    }
    
    int l = 0;
    int u = 1000000000;
    int prev = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > prev) {
            u = min(u, (a[i] + prev) / 2);
        } else if (a[i] < prev) {
            l = max(l, (int)ceil(1.0 * (a[i] + prev) / 2));
        }
        prev = a[i];
    }
    
//    cout << l << " " << u << endl;
    if (l > u) {
        cout << "-1" << endl;
    } else {
        cout << l << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
