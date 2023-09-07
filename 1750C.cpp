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

        string a, b;
        cin >> a >> b;
        
        bool res = true;
        if (a.compare(b) == 0) {
            res = true;
        } else {
            for (int i = 0; i < n; ++i) {
                if (a[i] == b[i]) {
                    res = false;
                    break;
                }
            }
        }
        
        cout << (res == 1 ? "YES" : "NO") << endl;
        
        if (res) {
            bool allZero = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] != '0' || b[i] != '0') {
                    allZero = false;
                }
            }
            
            if (allZero) {
                cout << 0 << endl;
            } else {
                int cnt = 0;
                for (int i = 0; i < n; ++i) {
                    if (a[i] == '1') {
                        ++cnt;
                    }
                }
                
                if ((cnt % 2 == 1 && a.compare(b) != 0) || (cnt % 2 == 0 && a.compare(b) == 0)) {
                    cout << cnt << endl;
                } else {
                    cout << cnt + 3 << endl;
                }
                
                for (int i = 0; i < n; ++i) {
                    if (a[i] == '1') {
                        cout << i + 1 << " " << i + 1 << endl;
                    }
                }
                
                if (!((cnt % 2 == 1 && a.compare(b) != 0) || (cnt % 2 == 0 && a.compare(b) == 0))) {
                    cout << 1 << " " << n << endl;
                    cout << 1 << " " << 1 << endl;
                    cout << 2 << " " << n << endl;
                }
            }
        }
	}
}
