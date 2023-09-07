#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    if (n != 5) {
        cout << "NO" << endl;
        return;
    }
    
    set<char> ss;
    for (char c : s) {
        ss.insert(c);
    }
    
    set<char> st = {'T', 'i', 'm', 'u', 'r'};
    cout << (ss == st ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
