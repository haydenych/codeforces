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
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    string s;
    cin >> s;
    
    map<int, char> m;
    for (int i = 0; i < n; ++i) {
        if (m.find(v[i]) != m.end() && m[v[i]] != s[i]) {
            cout << "NO" << endl;
            return;
        }
        
        m[v[i]] = s[i];
    }
    
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

