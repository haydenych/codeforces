#include <iostream>
#include <iomanip>
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
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; ++i) {
        min &= a[i];
        max |= a[i];
    }
    
    cout << max - min << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
