#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void count(int& res, vector<int>& v, int l, int r, stack<int>& smin) {
    if (l >= r) {
        return;
    }
    
    int m = (l + r) / 2;
    count(res, v, l, m, smin);
    count(res, v, m + 1, r, smin);
    
    int mmin = v[l];
    int mmax = v[l];
    for (int i = l; i <= r; ++i) {
        mmin = min(mmin, v[i]);
        mmax = max(mmax, v[i]);
    }
    
    if (mmax - mmin == r - l && res != -1) {
        if (r - l == 1) {
            smin.push(mmin);
            res = (v[l] < v[r]) ? res : res + 1;
        } else {
            int b = smin.top(); smin.pop();
            int a = smin.top(); smin.pop();
            res = (a < b) ? res : res + 1;
            smin.push(min(a, b));
            
        }
    } else {
        res = -1;
    }
}

void solve() {
    int m;
    cin >> m;
    
    vector<int> v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    
    int res = 0;
    stack<int> s;
    count(res, v, 0, m - 1, s);
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
