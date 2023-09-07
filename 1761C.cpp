#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

vector<set<int>> res;
vector<vector<int>> v;

void dfs(int& cnt, int c) {
    if (res[c].size() != 0) return;
    
    for (int i = 0; i < v[c].size(); ++i) {
        dfs(cnt, v[c][i]);
    }
    
    set<int> t;
    for (int i = 0; i < v[c].size(); ++i) {
//        cout << v[c][i] << endl;
        t.insert(res[v[c][i]].begin(), res[v[c][i]].end());
    }

    t.insert(cnt++);
    res[c] = t;
}

void solve() {
    int n;
    cin >> n;
    
    v.clear();
    res.clear();
    
    v.resize(n);
    res.resize(n);
    
    for (int i = 0; i < n; ++i) {
        string ss;
        cin >> ss;
        
        for (int j = 0; j < ss.length(); ++j) {
            if (ss[j] - '0' == 1) {
                v[j].push_back(i);
            }
        }
    }
    
//    for (int i = 0; i < v.size(); ++i) {
//        cout << i << " ";
//        for (int j = 0; j < v[i].size(); ++j) {
//            cout << v[i][j] << " ";
//        }
//        cout << endl;
//    }
    
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        dfs(cnt, i);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << res[i].size() << " ";
        for (auto num : res[i]) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
