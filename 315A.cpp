#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> v;
    set<int> s;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        v.push_back(a);
        if (a != b) {
            s.insert(b);
        } else {
            ++m[a];
        }
    }
    
    for (auto [k, v] : m) {
        if (v >= 2 && s.find(k) == s.end()) {
            s.insert(k);
        }
    }
    
    int res = n;
    for (int i = 0; i < v.size(); ++i) {
        if (s.find(v[i]) != s.end()) {
            --res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
