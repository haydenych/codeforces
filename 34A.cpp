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
    
    int a = n - 1;
    int b = 0;
    int md = abs(v[b] - v[a]);
    
    for (int i = 1; i < n; ++i) {
        if (abs(v[i] - v[i - 1]) < md) {
            md = abs(v[i] - v[i - 1]);
            a = i - 1;
            b = i;
        }
    }
    
    cout << a + 1 << " " << b + 1 << endl;
}

int main() {
    solve();
}
