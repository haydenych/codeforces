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
    
    sort(a.begin(), a.end(), greater<int>());
    if (a[0] == a[n - 1]) {
        cout << "NO" << endl;
        return;
    }
    
    if (a[0] == a[1]) {
        int t = a[0];
        a[0] = a[n - 1];
        a[n - 1] = t;
    }
    
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
