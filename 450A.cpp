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
    int n, m;
    cin >> n >> m;
    
    int res = -1;
    int l = -1;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        if (((a - 1) / m) + 1 >= l) {
            l = ((a - 1) / m) + 1;
            res = i + 1;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
