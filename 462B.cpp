#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    map<char, int> m;
    for (char c : s) {
        m[c]++;
    }
    
    vector<pair<char, int>> v;
    for (auto [key, val] : m) {
        v.push_back(make_pair(key, val));
    }
    
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        return a.second > b.second;
    });
    
    ll res = 0;
    for (int i = 0; i < v.size() && k != 0; ++i) {
        if (v[i].second >= k) {
            res += (ll)k * k;
            k = 0;
        } else {
            res += (ll)v[i].second * v[i].second;
            k -= v[i].second;
        }
    }
    
    cout << res << endl;
}

int main() {
    solve();
}
