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
    int k, n;
    cin >> k >> n;
    
    vector<int> a(k);
    a[0] = 1;
    
    for (int i = 1; i < k; ++i) {
        if (a[i - 1] + i <= n - k + i + 1) {
            a[i] = a[i - 1] + i;
        } else {
            a[i] = a[i - 1] + 1;
        }
    }
    
    for (int i = 0; i < k; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
