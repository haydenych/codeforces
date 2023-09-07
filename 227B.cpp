#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> e;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        e[num] = i;
    }
    
    int m;
    cin >> m;
    
    ll res1 = 0;
    ll res2 = 0;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        
        res1 += e[num] + 1;
        res2 += n - e[num];
    }
    
    cout << res1 << " " << res2 << endl;
}

int main() {
    solve();
}
