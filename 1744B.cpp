#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    int co = 0;
    int ce = 0;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        if (a % 2 == 1) {
            ++co;
        } else {
            ++ce;
        }
        
        sum += a;
    }
    
    for (int i = 0; i < q; ++i) {
        int t, x;
        cin >> t >> x;
        if (t == 0) {
            sum += (ll)x * ce;
            if (x % 2 == 1) {
                co += ce;
                ce = 0;
            }
        } else {
            sum += (ll)x * co;
            if (x % 2 == 1) {
                ce += co;
                co = 0;
            }
        }
        
        cout << sum << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

