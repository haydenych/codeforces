#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    
    int c1 = 0;
    int c2 = 0;
    
    int t = n;
    while (t % 2 == 0) {
        t /= 2;
        ++c1;
    }
    
    t = n;
    while (t % 5 == 0) {
        t /= 5;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
