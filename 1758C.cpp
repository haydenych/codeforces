#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

vector<int> factorization(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    
    if (n > 1) {
        res.push_back(n);
    }
    
    return res;
}

void solve() {
    int n, x;
    cin >> n >> x;
    
    if (n % x != 0) {
        cout << -1 << endl;
        return;
    }

    vector<int> f = factorization(n / x);
    
    vector<int> res(n + 1, -1);
    res[0] = -1;
    res[1] = x;
    
    int prev = 1;
    int curr = x;
    for (int i = 0; i < f.size(); ++i) {
        res[curr] = res[prev] * f[i];
        prev = curr;
        curr = res[prev];
    }
    
    res[n] = 1;

    for (int i = 2; i < n + 1; ++i) {
        if (res[i] == -1) {
            res[i] = i;
        }
    }
    
    for (int i = 1; i < n + 1; ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
