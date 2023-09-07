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
    
    map<int, int> m;
    for (int i = 1; i <= 7; ++i) {
        m[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        m[num]++;
    }
    
    bool valid = true;
    vector<string> res;
    if (m[5] != 0 || m[7] != 0) {
        cout << -1 << endl;
    } else if (m[4] > m[1] || m[4] > m[2]) {
        cout << -1 << endl;
        valid = false;
    } else {
        for (int i = 0; i < m[4]; ++i) {
            res.push_back("1 2 4");
        }
        m[1] -= m[4];
        m[2] -= m[4];
        m[4] = 0;
        
        // 124 126 136
        if ((m[1] != m[6]) || (m[2] + m[3] != m[6])) {
            cout << -1 << endl;
            valid = false;
        } else {
            for (int i = 0; i < m[2]; ++i) {
                res.push_back("1 2 6");
            }
            
            for (int i = 0; i < m[3]; ++i) {
                res.push_back("1 3 6");
            }
        }
        
        if (valid) {
            for (int i = 0; i < res.size(); ++i) {
                cout << res[i] << endl;
            }
        }
    }
}

int main() {
    solve();
}
