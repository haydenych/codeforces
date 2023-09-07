#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int main() {
	int numCases;
	cin >> numCases;
	
	for (int i = 0; i < numCases; ++i) {
        int N;
        cin >> N;
        
        ll res = 0;
        int num;
        for (int j = 0; j < N; ++j) {
            cin >> num;
            res += num;
        }
        
		cout << (res > 0 ? res : -res) << endl;
	}
}
