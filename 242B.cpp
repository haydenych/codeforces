#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        v.push_back(make_pair(a, b));
    }
    
    vector<pair<int, int>> v1 = v;
    vector<pair<int, int>> v2 = v;
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    });
    
    int min = v1[0].first;
    int max = v2[v2.size() - 1].second;
    
    int idx = -1;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].first == min && v[i].second == max) {
            idx = i + 1;
            break;
        }
    }
    
    cout << idx << endl;
}

int main() {
    solve();
}
