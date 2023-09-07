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
    
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }
    
    int res = 0;
    for (int i = 0; i < n; ++i) {
        bool N = false;
        bool S = false;
        bool W = false;
        bool E = false;
        
        for (int j = 0; j < n; ++j) {
            if (vp[j].first == vp[i].first) {
                if (vp[j].second > vp[i].second) {
                    N = true;
                } else if (vp[j].second < vp[i].second) {
                    S = true;
                }
            }
            
            if (vp[j].second == vp[i].second) {
                if (vp[j].first > vp[i].first) {
                    E = true;
                } else if (vp[j].first < vp[i].first) {
                    W = true;
                }
            }
        }
        
        if (N && S && W && E) {
            ++res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
