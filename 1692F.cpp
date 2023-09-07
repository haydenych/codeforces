#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        m[a % 10]++;
    }
    
    bool res = false;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                if ((i + j + k) % 10 == 3 && m[i] != 0 && m[j] != 0 && m[k] != 0) {
                    if ((i != j && j != k && i != k) ||
                        (i == j && j != k && m[i] >= 2) ||
                        (i == k && k != j && m[i] >= 2) ||
                        (j == k && k != i && m[j] >= 2) ||
                        (i == j && j == k && m[i] >= 3)) {
                        res = true;
                        break;
                    }
                }
            }
        }
    }
    
    cout << (res ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
