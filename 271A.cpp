#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int y;
    cin >> y;
    
    bool found = false;
    while (!found) {
        ++y;
        
        int t = y;
        set<int> s;
        while (t > 0) {
            s.insert(t % 10);
            t /= 10;
        }
        
        if (s.size() == 4) {
            cout << y << endl;
            found = true;
        }
    }
}

int main() {
    solve();
}
