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
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int i = 0;
    int j = n;
    
    int curr = -1;
    int p_sum = 0;
    while (i < j) {
        p_sum += v[i];
        if (curr == -1) {
            curr = i;
        } else {
            
        }
        
        ++i;
    }
    
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
