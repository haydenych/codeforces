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
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m));
    vector<pair<int, int>> c(n);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        c[i] = make_pair(i, 0);
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                ++cnt;
                ++c[i].second;
            }
        }
    }
    
    if (cnt % n != 0) {
        cout << -1 << endl;
        return;
    }
    
    sort(c.begin(), c.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        return a.second < b.second;
    });
    
    int t = cnt / n;
    
    int l = 0;
    int r = n - 1;
    
    vector<vector<int>> res;
    
    while (l < r) {
        int diff = min(abs(c[l].second - t), abs(c[r].second - t));
        if (diff == 0) {
            ++l;
            --r;
            continue;
        }
        
        set<int> sa;
        set<int> sb;
        for (int i = 0; i < m; ++i) {
            if (a[c[l].first][i] == 0) sa.insert(i);
            if (a[c[r].first][i] == 1) sb.insert(i);
        }
        
        set<int> intersect;
        set_intersection(sa.begin(), sa.end(), sb.begin(), sb.end(),
                         inserter(intersect, intersect.begin()));
        
        int cc = 0;
        for (int ss : intersect) {
            a[c[l].first][ss] = 1;
            a[c[r].first][ss] = 0;
            ++c[l].second;
            --c[r].second;
            
            vector<int> vt{c[l].first + 1, c[r].first + 1, ss + 1};
            res.push_back(vt);
            
            ++cc;
            if (cc >= diff) break;
        }
        
        if (c[l].second == t && c[r].second == t) {
            ++l;
            --r;
        } else if (c[l].second == t) {
            ++l;
        } else {
            --r;
        }
    }
    
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
