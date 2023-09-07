#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int cal(vector<int> v, queue<int> q, ll h) {
    int res = 0;

    int i = 0;
    while(i < v.size() && !q.empty()) {
        if (h > v[i]) {
            h += v[i] / 2;
            ++i;
            ++res;
        } else {
            h *= q.front();
            q.pop();
        }
    }
    
    return res;
}

void solve() {
    ll n, h;
    cin >> n >> h;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int res = 0;
    
    queue<int> q1;
    q1.push(2);
    q1.push(2);
    q1.push(3);
    q1.push(-1);
    res = max(res, cal(v, q1, h));
    
    queue<int> q2;
    q2.push(2);
    q2.push(3);
    q2.push(2);
    q2.push(-1);
    res = max(res, cal(v, q2, h));
    
    queue<int> q3;
    q3.push(3);
    q3.push(2);
    q3.push(2);
    q3.push(-1);
    res = max(res, cal(v, q3, h));
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
