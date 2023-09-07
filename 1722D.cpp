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
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    ll res = 0;
    vector<ll> cnt(n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            cnt[i] = i;
            res += i;
        } else {
            cnt[i] = n - i - 1;
            res += n - i - 1;
        }
    }
    
    sort(cnt.begin(), cnt.end());
    
    for (int i = 0; i < n; ++i) {
        if (cnt[i] <= (n - 1) / 2) {
            res += n - 1 - 2 * cnt[i];
        }
        
        cout << res << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
