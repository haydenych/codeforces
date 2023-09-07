#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    
    string s;
    cin >> s;
    
    vector<char> v(n);
    for (int i = 0; i < s.length(); ++i) {
        v[i] = s[i];
    }
    
    vector<char> prev = v;
    vector<char> curr(n);
    for (int i = 0; i < t; ++i) {
        curr[0] = prev[0];
        for (int j = 1; j < n; ++j) {
            if (prev[j - 1] == 'B' && prev[j] == 'G') {
                curr[j - 1] = 'G';
                curr[j] = 'B';
            } else {
                curr[j] = prev[j];
            }
        }
        
        prev = curr;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << curr[i];
    }
    cout << endl;
    
}

int main() {
    solve();
}
