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
        string s;
        cin >> n >> s;
        
        ll res = 0;
        ll con = 0;
        int x = 0;
        int y = 0;
        char prev = ' ';
        for (char c : s) {
            if (c == '0') {
                x++;
            } else {
                y++;
            }

            if (c == prev) {
                ++con;
            } else {
                con = 1;
            }
            
            res = max(res, con * con);
            prev = c;
        }
        
        res = max(res, (ll)x * y);
        cout << res << endl;
    }
}

