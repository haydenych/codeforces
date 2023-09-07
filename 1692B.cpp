#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        ++m[a];
    }
    
    int cnt = 0;
    for (auto [k, v] : m) {
        if (v >= 2) {
            cnt += (v - 1);
        }
    }
    
    cout << (n - ceil(1.0 * cnt / 2) * 2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
