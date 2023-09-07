#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    
    string s;
    cin >> s;
    
    if (c == 'g') {
        cout << 0 << endl;
        return;
    }
    
    set<int> st;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'g') {
            st.insert(i);
        }
    }
    
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            auto it = st.upper_bound(i);
            if (it != st.end()) {
                res = max(res, *it - i);
            } else {
                it = st.upper_bound(-1);
                res = max(res, n + *it - i);
            }
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

