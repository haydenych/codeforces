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
        
        bool lose = false;
        bool first = true;
        int a;
        for (int j = 0; j < N; ++j) {
            int num;
            cin >> num;
            
            if (first) {
                a = num;
                first = false;
            } else {
//                cout << num << " " << a<< endl;
                if (num >= a) {
                    lose = true;
                    break;
                }
            }
        }
        
        if (!lose) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
	}
}




