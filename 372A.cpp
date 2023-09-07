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
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int a = 0;
    int b = n / 2;
    
    int res = n;
    while (a < n / 2 && b < n) {
        if (v[b] >= v[a] * 2) {
            ++a;
            ++b;
            --res;
        } else {
            ++b;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
