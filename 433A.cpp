#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int o = 0;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num == 100) {
            ++o;
        } else {
            ++t;
        }
    }
    
    cout << ((o != 0 && o % 2 == 0) || (o == 0 && t % 2 == 0) ? "YES" : "NO") << endl;
}

int main() {
    solve();
}
