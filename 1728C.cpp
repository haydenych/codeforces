#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>

#define ll long long
#define ld long double

using namespace std;

int cnt(int n) {
    int res = 0;
    while (n > 0) {
        n /= 10;
        ++res;
    }
    
    return res;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> ao0(10, 0);
    vector<int> bo0(10, 0);
    
    vector<int> ao1(10, 0);
    vector<int> bo1(10, 0);
    
    vector<int> va;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        va.push_back(a);
    }
    
    vector<int> vb;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        vb.push_back(b);
    }
    
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    
    int l = 0;
    for (auto a : va) {
        while (l < n && vb[l] < a) {
            ++l;
        }
        
        if (vb[l] == a) {
            ++l;
            continue;
        }

        if (a < 10) {
            ao0[a]++;
        } else {
            ao1[cnt(a)]++;
        }
    }
    
    l = 0;
    for (auto b : vb) {
        while (l < n && va[l] < b) {
            ++l;
        }
        
        if (va[l] == b) {
            ++l;
            continue;
        }

        if (b < 10) {
            bo0[b]++;
        } else {
            bo1[cnt(b)]++;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        int m = min(ao0[i], bo0[i]);
        if (m > 0) {
            ao0[i] -= m;
            bo0[i] -= m;
        }
    }
    
    int res = 0;
    for (int i = 0; i < 10; ++i) {
        int m = min(ao0[i], bo1[i]);
//        cout << i << " " << m << endl;
        if (m > 0) {
            ao0[i] -= m;
            bo1[i] -= m;
            res += m;
        }
        
        m = min(ao1[i], bo0[i]);
//        cout << i << " " << m << endl;
        if (m > 0) {
            ao1[i] -= m;
            bo0[i] -= m;
            res += m;
        }
        
        m = min(ao1[i], bo1[i]);
//        cout << i << " " << m << endl;
        if (m > 0) {
            ao1[i] -= m;
            bo1[i] -= m;
            res += m * 2;
        }
        
        
    }
    
    for (int i = 0; i < 10; ++i) {
//        cout << ao0[i] << " " << bo0[i] << " " << ao1[i] << " " << bo1[i] << endl;
        if (i == 1) {
            res += ao1[i] + bo1[i];
        } else {
            res += ao0[i] + bo0[i] + ao1[i] * 2 + bo1[i] * 2;
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
