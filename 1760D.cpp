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
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    bool asc = true;
    bool desc = true;
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i - 1]) {
            asc = false;
        }
        
        if (v[i] > v[i - 1]) {
            desc = false;
        }
    }
    
    if (asc || desc) {
        cout << "YES" << endl;
    } else {
        int x = -1;
        for (int i = 1; i < n; ++i) {
            if (v[i] > v[i - 1] && x == -1) {
                x = i - 1;
            }
            
            if (x != -1 && v[i] < v[i - 1]) {
                x = -1;
                break;
            }
        }
        
//        cout << x << endl;
        cout << (x == -1 ? "NO" : "YES") << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}




