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
    
    int sum = 0;
    int res = -1;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        sum += b - a;
        res = max(res, sum);
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
