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
    
    string a, b;
    cin >> a >> b;
    
    for (int i = 1; i < n; ++i) {
        if (a[i] == 'B' && a[i - 1] == 'W' && b[i] == 'W' && b[i - 1] == 'B') {
            cout << "NO" << endl;
            return;
        }
    }

    int prev = -1;
    int cons = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 'B' && b[i] == 'B') {
            ++cons;
//            cout << i << " " << cons << endl;
            continue;
        }
        
        int curr = (a[i] == 'B' ? 0 : 1);
//        cout << prev << " " << curr << " " << cons << " " << i << endl;
        if (cons % 2 == 1 && prev == curr && prev != -1) {
            cout << "NO" << endl;
            return;
        }
        
        if (cons % 2 == 0 && prev != curr && prev != -1) {
            cout << "NO" << endl;
            return;
        }
        
        prev = curr;
        cons = 0;
    }
    
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
