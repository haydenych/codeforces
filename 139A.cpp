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
    
    vector<int> v(7);
    for (int i = 0; i < 7; ++i) {
        cin >> v[i];
    }
    
    int r = n;
    
    int i = -1;
    while (r > 0) {
        i++;
        i %= 7;
        r -= v[i];
    }
    
    cout << i + 1 << endl;
}

int main() {
    solve();
}
