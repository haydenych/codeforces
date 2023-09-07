#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    
    if (a.compare(b) == 0) {
        cout << "=" << endl;
    } else {
        if (a[(int)a.length() - 1] < b[(int)b.length() - 1]) {
            cout << ">" << endl;
        } else if (a[(int)a.length() - 1] > b[(int)b.length() - 1]) {
            cout << "<" << endl;
        } else {
            if (a.length() == b.length()) {
                cout << "=" << endl;
            } else {
                if (a[(int)a.length() - 1] == 'L') {
                    cout << (a.length() < b.length() ? "<" : ">") << endl;
                } else {
                    cout << (a.length() < b.length() ? ">" : "<") << endl;
                }
            }
        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
