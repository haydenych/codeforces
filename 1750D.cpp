#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int euler_t(int n) {
    int res = n;
  
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
                 
            res -= res / i;
        }
    }

    if (n > 1) {
        res -= res / n;
    }
    
    return res;
}

int main() {
	int t;
	cin >> t;
	
	for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        
        vector<int> nums(n);
        for (int j = 0; j < n; ++j) {
            cin >> nums[j];
        }
        
        bool imp = false;
        for (int j = 1; j < n && !imp; ++j) {
            if (nums[j] > nums[j - 1] || nums[j - 1] % nums[j] != 0) {
                imp = true;
            }
        }
        
        if (imp) {
            cout << 0 << endl;
        } else {
            ll res = 1;
            for (int j = 1; j < n; ++j) {
                res *= euler_t(m / nums[j]);
                cout << euler_t(m / nums[j]) << endl;
                
            }
            
            cout << (res % 998244353) << endl;
        }
	}
}
