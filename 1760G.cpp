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

map<int, vector<pair<int, int>>> m;

set<int> st;

void dfs1(int c, int p, int x) {
    for (int i = 0; i < m[c].size(); ++i){
        if (m[c][i].first == p) {
            continue;
        }
        
        st.insert(x ^ m[c][i].second);
        dfs1(m[c][i].first, c, x ^ m[c][i].second);
    }
}

void dfs2(bool& res, int c, int p, int x, int t) {
    if (res) return;
    if ((c == t && x == 0) || (c != t && st.find(x) != st.end())) {
        res = true;
        return;
    }
    if (c == t) return;
    
    for (int i = 0; i < m[c].size(); ++i) {
        if (m[c][i].first == p) {
            continue;
        }
        
        dfs2(res, m[c][i].first, c, x ^ m[c][i].second, t);
    }
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    st.clear();
    for (auto [k, v] : m) {
        v.clear();
    }
    m.clear();
    
    for (int i = 0; i < n - 1; ++i) {
        int u, v, w;
        cin >> u >> v >> w;

        m[u].push_back(make_pair(v, w));
        m[v].push_back(make_pair(u, w));
    }

    dfs1(b, -1, 0);

    bool res = false;
    dfs2(res, a, -1, 0, b);

    if (res) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




