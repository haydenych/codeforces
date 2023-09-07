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
    int a, b;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> n;
            
            if (n == 1) {
                a = i;
                b = j;
            }
        }
    }
    
    cout << abs(a - 2) + abs(b - 2) << endl;
}

int main() {
    solve();
}
