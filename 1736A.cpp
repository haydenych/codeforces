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
    
    vector<int> va(n);
    vector<int> vb(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> va[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> vb[i];
    }
    
    int res1 = 0;
    for (int i = 0; i < n; ++i) {
        if (va[i] != vb[i]) ++res1;
    }
    
    int res2 = 1;
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    for (int i = 0; i < n; ++i) {
        if (va[i] != vb[i]) ++res2;
    }
    
    cout << min(res1, res2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
