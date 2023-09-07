#include <iostream>
#include <string>
#include <cmath>
#include <vector>
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
    
    int i = 0;
    int j = n - 1;
    int si = v[i];
    int sj = v[j];
    int res = n;
    
    while (i < j) {
        while (i < j && si != sj) {
            if (si > sj) {
                sj += v[--j];
            } else {
                si += v[++i];
            }
        }
        
        if (i == j && si != sj) {
            break;
        }
        
        int c = i + 1;
        int cp = i;
        int cs = 0;
        int cres = max(i + 1, n - j);
//        cout << i << " " << j << endl;
//        cout << cres << endl;
        while (c < j) {
            cs += v[c];
            if (cs == si) {
                cs = 0;
                cres = max(cres, c - cp);
                cp = c++;
            } else if (cs < si) {
                ++c;
            } else {
                cres = n;
                break;
            }
        }
        
        if (c == j && cs != 0) {
            si += v[++i];
            sj += v[--j];
            continue;
        }
        
//        cout << cres << endl;
        res = min(res, cres);
        si += v[++i];
        sj += v[--j];
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
