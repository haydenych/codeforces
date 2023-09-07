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

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    string res = "";
    int i = 0;
    while (i < n) {
        string curr = "";
        int j = i;
        while (j < n) {
            curr += s[j];
            if (s[j] == '0') {
                break;
            }
            
            ++j;
        }
        
        if ((j + 1) < n && s[j + 1] == '0') {
            curr += s[j];
            ++j;
        }
        
//        cout << curr << endl;
        if (curr[(int)curr.length() - 1] == '0') {
            for (int i = 0; i < (int)curr.length() - 3; ++i) {
                res += ('a' + curr[i] - '0' - 1);
            }
            
            int last = 10 * (curr[(int)curr.length() - 3] - '0') + (curr[(int)curr.length() - 2] - '0');
//            cout << last << endl;
            res += ('a' + last - 1);
        } else {
            for (char c : curr) {
                res += ('a' + c - '0' - 1);
            }
        }
        
        i = j + 1;
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
