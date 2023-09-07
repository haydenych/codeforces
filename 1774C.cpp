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
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> res(n - 1);
    char prev = ' ';
    int cons = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (prev == s[i]) {
            ++cons;
        } else {
            cons = 1;
        }
        
        res[i] = 2 + i - cons;
        prev = s[i];
    }
    
    for (int r : res) {
        cout << r << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
