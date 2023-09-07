#include <iostream>
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
    
    int m1 = INT_MAX;
    int m1_idx = -1;
    int m2 = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        
        if (c < m1) {
            m2 = m1;
            m1 = c;
            m1_idx = i + 1;
        } else if (c < m2) {
            m2 = c;
        }
    }
    
    cout << ((m1 != m2) ? to_string(m1_idx) : "Still Rozdil") << endl;
}

int main() {
    solve();
}
