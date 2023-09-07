#include <iostream>
#include <iomanip>
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
    
    vector<int> v(n);
    vector<int> c(100005, 0);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        ++c[v[i]];
    }
    
    int res = 0;
    int score1 = 0;
    int score2 = 0;
    
    for (int i = 0; i < c.size(); ++i) {
        if (c[i] == 0) {
            res += max(score1, score2);
            score1 = 0;
            score2 = 0;
        } else {
            if (i % 2 == 1) {
                score1 += i * c[i];
            } else {
                score2 += i * c[i];
            }
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
