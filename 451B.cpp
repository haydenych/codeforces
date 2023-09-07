#include <iostream>
#include <string>
#include <cmath>
#include <map>
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
    
    if (asc) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }
    
    if (desc) {
        cout << "yes" << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    
    int start = -1;
    int end = -1;
    for (int i = 1; i < n; ++i) {
        if (start == -1) {
            if (v[i] < v[i - 1]) {
                start = i - 1;
            }
        } else if (end == -1) {
            if (v[i] > v[i - 1]) {
                end = i - 1;
            }
        } else {
            if (v[i] < v[i - 1]) {
                start = -1;
                end = -1;
                break;
            }
        }
    }
    
    end = (start != -1 && end == -1) ? n - 1 : end;
    if (start == -1) {
        cout << "no" << endl;
    } else {
        if ((start - 1 >= 0 && v[start - 1] > v[end]) || (end + 1 < n && v[start] > v[end + 1]) ) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
            cout << start + 1 << " " << end + 1 << endl;
        }
    }
}

int main() {
    solve();
}
