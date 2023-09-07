#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    vector<ll> t = v;
    sort(t.begin(), t.end());
    
    ll a = t[n - 1];
    ll b = t[n - 2];
    
    for (int i = 0; i < n; ++i) {
        cout << (v[i] == a ? v[i] - b : v[i] - a) << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




