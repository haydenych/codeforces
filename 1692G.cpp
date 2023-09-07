#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    vector<bool> f(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        f[i] = (2 * v[i + 1] > v[i]);
    }
    
    int i = 0;
    int j = 0;
    int res = 0;
    bool curr = true;
    while (j < n - 1) {
        while (j < n - 1 && curr) {
            curr = curr && f[j];
            
            if (j - i + 1 >= k && curr) {
//                cout << i << " " << j << endl;
                ++res;
            }
            
            ++j;
        }
        
        i = j;
        curr = true;
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
