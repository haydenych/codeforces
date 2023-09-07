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

int sum(int n) {
    int res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    
    return res;
}

void solve() {
    int m, s;
    cin >> m >> s;
    
    if (m == 1 && s == 0) {
        cout << "0 0" << endl;
        return;
    } else if (s == 0 || m * 9 < s) {
        cout << "-1 -1" << endl;
        return;
    }
    
    int t = s;
    bool first = true;
    
    vector<int> sm(m);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (first) {
                first = false;
                continue;
            }
            if ((m - i - 1) * 9 >= t - j) {
                sm[i] = j;
                t -= j;
                break;
            }
        }
    }
    
    sort(sm.begin(), sm.end());
    
    t = s;
    vector<int> lg(m);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 10; ++j) {
            if ((m - i - 1) * 9 >= t - j) {
                lg[i] = j;
                t -= j;
                break;
            }
        }
    }
    
    if (sm[0] == 0) {
        for (int i = 0; i < m; ++i) {
            if (sm[i] != 0) {
                sm[0] = sm[i];
                sm[i] = 0;
                break;
            }
        }
    }
    
    string ssm = "";
    for (int i = 0; i < m; ++i) {
        ssm += to_string(sm[i]);
    }
    
    string slg = "";
    for (int i = m - 1; i >= 0; --i) {
        slg += to_string(lg[i]);
    }
        
    cout << ssm << " " << slg << endl;
}

int main() {
    solve();
}
