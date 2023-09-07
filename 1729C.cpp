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
    string s;
    cin >> s;
    
    int n = s.length();
    
    vector<pair<char, int>> vp;
    for (int i = 0; i < n; ++i) {
        vp.push_back(make_pair(s[i], i + 1));
    }
    
    if (s[0] < s[n - 1]) {
        sort(vp.begin(), vp.end(), [](pair<char, int> &a, pair<char, int> &b){
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first;
        });
    } else {
        sort(vp.begin(), vp.end(), [](pair<char, int> &a, pair<char, int> &b){
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        });
    }
    
    bool found = false;
    int cnt = 0;
    string res = "";
    for (int i = 0; i < n; ++i) {
        if (vp[i].second == 1) {
            found = true;
        }
        
        
        if (found) {
            ++cnt;
            res = res + to_string(vp[i].second) + " ";
        }
        
        if (vp[i].second == n) {
            break;
        }
    }
    
    cout << abs(s[0] - s[n - 1]) << " " << cnt << endl;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
