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
    // 1 is to the right of any 2
    int n;
    cin >> n;
    
    int one_rpos = 0;
    int two_lpos = n;
    
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = vector<int>(n - i);
        for (int j = 0; j < n - i; ++j) {
            cin >> v[i][j];
            if (v[i][j] == 1) {
                one_rpos = max(one_rpos, j);
            } else if (v[i][j] == 2) {
                two_lpos = min(two_lpos, j);
            }
        }
    }
    
    if (two_lpos < one_rpos) {
        cout << 0 << endl;
        return;
    }
    
    ll res = 1;
    
    // right most 1 - right most 2 ?
    int c = 0;
    while (c < n) {
        int curr_one_rpos = 0;
        for (int j = 0; j < n - c; ++j) {
            if (v[c][j] == 1) {
                curr_one_rpos = c + j;
            }
        }
        
        res *= 2;
        c = curr_one_rpos + 1;
    }
    
    c = 0;
    while (c < n) {
        int curr_two_lpos = n + 1;
        for (int j = 0; j < n - c; ++j) {
            if (v[c][j] == 2) {
                curr_two_lpos = c + j;
                
            }
        }
    }
    
    
}

int main() {
    solve();
}
