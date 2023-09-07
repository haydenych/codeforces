#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    for (int i = n + 1; i <= m; ++i) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout  << (i == m ? "YES" : "NO") << endl;
            break;
        }
        
        if (i == m && !isPrime) {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
}
