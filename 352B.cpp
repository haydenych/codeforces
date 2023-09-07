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
    
    map<int, vector<int>> m;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        m[num].push_back(i);
    }
    
    vector<pair<int, int>> res;
    for (auto [k, v] : m) {
        if (v.size() == 1) {
            res.push_back(make_pair(k, 0));
        } else {
            int diff = v[1] - v[0];
            bool valid = true;
            
            for (int i = 2; i < v.size(); ++i) {
                if (v[i] - v[i - 1] != diff) {
                    valid = false;
                }
            }
            
            if (valid) res.push_back(make_pair(k, diff));
        }
    }
    
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i].first << " " << res[i].second << endl;
    }
}

int main() {
    solve();
}
