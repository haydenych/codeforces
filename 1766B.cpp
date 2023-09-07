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
    
    string s;
    cin >> s;
    
    map<string, vector<int>> m;
    for (int i = 1; i < s.length(); ++i) {
        m[string(1, s[i - 1]) + string(1, s[i])].push_back(i - 1);
    }
    
    for (auto [k, v] : m) {
        if (v.size() >= 3) {
            cout << "YES" << endl;
            return;
        }
        
        if (v.size() == 2) {
            if (v[0] != v[1] - 1) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
