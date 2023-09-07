#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    vector<string> v(8);
    for (int i = 0; i < 8; ++i) {
        string s;
        cin >> s;
        v[i] = s;
    }
    
    bool two = false;
    for (int i = 0; i < 8; ++i) {
        int cnt = 0;
        int pos_j = -1;
        for (int j = 0; j < 8; ++j) {
            if (v[i][j] == '#') {
                ++cnt; pos_j = j;
            }
        }
        
        if (!two && cnt == 2) two = true;
        if (two && cnt == 1) {
            cout << i + 1 << " " << pos_j + 1 << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
