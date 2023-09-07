#include <iostream>
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
    string ss;
    cin >> ss;
    
    set<char> s;
    for (char c : ss) {
        s.insert(c);
    }
    
    cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}

int main() {
    solve();
}
