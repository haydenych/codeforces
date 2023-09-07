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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    
    cout << 4 - s.size() << endl;
}

int main() {
    solve();
}
