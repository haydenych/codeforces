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
        int N;
        cin >> N;
        
        cout << (N + 1) / 2 << endl;
        
        for (int j = 0; j < (N + 1) / 2; ++j) {
            cout << 3 * j + 2 << " " << 3 * (N - j) << endl;
        }
	}
}
