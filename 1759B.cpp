#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int m, s;
    cin >> m >> s;
    
    int n = -1;
    unordered_set<int> ss;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        ss.insert(num);
        n = max(n, num);
    }
    
    if (ss.size() != m) {
        cout << "NO" << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            if (ss.find(i) == ss.end()) {
                s -= i;
            }
            
            if (s < 0) {
                cout << "NO" << endl;
                return;
            }
        }
        
        int curr = n + 1;
        while (s > 0) {
            s -= curr;
            ++curr;
        }
        
        cout << (s == 0 ? "YES" : "NO") << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
