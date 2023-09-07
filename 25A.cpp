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
    
    vector<int> v(n);
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] % 2 == 1) {
            a.push_back(i + 1);
        } else {
            b.push_back(i + 1);
        }
    }
    
    cout << (a.size() == 1 ? a[0] : b[0]) << endl;
}

int main() {
    solve();
}
