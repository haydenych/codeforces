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
    
    int l = INT_MAX;
    int h = INT_MIN;
    int res = 0;
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        if (i != 0 && (num > h || num < l)) ++res;
        l = min(l, num);
        h = max(h, num);
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
