#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
    }
    
    cout << fixed << setprecision(6) << sum / n << endl;
}

int main() {
    solve();
}
