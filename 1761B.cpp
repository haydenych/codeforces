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
    
    vector<int> v(101, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ++v[a];
    }
    
    int cnt = 0;
    int m = 101;
    for (int i = 0; i < 101; ++i) {
        if (v[i] != 0) {
            ++cnt;
            m = min(m, v[i]);
        }
    }
    
    if (m == 1) {
        cout << n << endl;
    } else if (cnt == 2) {
        cout << n / 2 + 1 << endl;
    } else {
        cout << n << endl;
    }
    

    
//    1 2 3 4
//    4
//
//    1 2 3 2
//    4
//
//    1 2 1 2
//    3
//
//    1 2 3 4 5
//    5
//
//    1 2 3 1 2 3
//    1 2 3 2 3
//
//    1 2 3 2 1 3
//
//    1 2 1 2 1 2
//    2 1 2 1
//
//
//    1 2 3 2 4 1 4 3
//    1 2 3 2 4 1 4
//
//    1 2 1 3 1 2 1 3
//    1 2 3 2 3
//    1
//    Ans: 8
//
//    1 4 1 4 2 3 2 3
//
//
//    3 1 2 1 2 1 3 1
//
//    1 2 3 2 4 1 4 3
//    1 4 1 4 3
//    3
//
//    1 2 3 2 4 1 4 3
//    1 2 3 4 3
//
//    1 2 3 2 4 1 3 4 3
//
//
//
//    1 2 1 2 1 2 3 2 3
//    1 2 1 2 3 2 (-2)
//    Ans: 8
//
//
//
//
//    1 2 1 2 1 2
//    2 1 2 1
//    2 1
//    Ans: 4
    
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
