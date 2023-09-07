#include <iostream>
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
    
    int res = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        if (s.compare("++X") == 0 || s.compare("X++") == 0) {
            ++res;
        } else {
            --res;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
