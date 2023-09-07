#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define ld long double
#define pii pair<int, int>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    auto comp = [](const pii &a, const pii &b) {
        return a.second != b.second ? a.second > b.second : a.first > b.first;
    };

    priority_queue<pii, vector<pii>, decltype(comp)> pq;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        if (x < y) {
            pq.push(make_pair(x, y));
        } else {
            pq.push(make_pair(y, x));
        }
    }
    
    ll res = n;
    int curr = 1;
    while (!pq.empty()) {
        if (pq.top().first < curr) {
            pq.pop();
            continue;
        }
        
        ll diff = pq.top().second - 1 - curr;
        res += (1 + diff) * diff / 2;
        curr = pq.top().second;
        pq.pop();
    }
    
    ll diff = n - curr;
    res += (1 + diff) * diff / 2;
    cout << res << endl;
}

/*
 8
 1 5
 2 5
 3 5
 
 8 4
 1 6
 4 7
 5 6
 3 4
 
 
 
 */

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
