#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int j = 0; j < n; ++j) {
            cin >> nums[j];
        }
        
        int a = nums[0];
        int m = INT_MAX;
        for (int j = 0; j < n; ++j) {
            m = min(m, nums[j]);
        }
        
        if (a == m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
