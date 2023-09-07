#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int l = INT_MIN;
    int r = INT_MAX;
    
    int l_idx, r_idx;
    int c_idx = 0;
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        if (num > l) {
            l = num;
            l_idx = c_idx;
        }
        
        if (num <= r) {
            r = num;
            r_idx = c_idx;
        }
        
        ++c_idx;
    }
    
    if (r_idx < l_idx) {
        cout << l_idx + n - r_idx - 2 << endl;
    } else {
        cout << l_idx + n - r_idx - 1 << endl;
    }
}

int main() {
    solve();
}
