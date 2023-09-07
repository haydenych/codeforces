#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>

#define ll long long
#define ld long double

using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> p;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            
            if (a > b) {
                p.push_back(make_pair(a, b));
            } else {
                p.push_back(make_pair(b, a));
            }

        }
        
        sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b){
            return a.first < b.first;
        });
        
        ll res = 0;
        int prev = 0;
        for (int i = 0; i < p.size(); ++i) {
            res += ((ll)(p[i].first - prev) + p[i].second) * 2;
            prev = p[i].first;
        }
        
        cout << res << endl;
	}
}
