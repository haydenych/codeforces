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
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int f;
        cin >> f;
        sum += f;
    }
    
    int res = 5;
    for (int i = 1; i <= 5; ++i) {
        if ((sum + i) % (n + 1) == 1) {
            --res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
