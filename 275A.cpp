#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    vector<vector<bool>> board(3, vector<bool>(3, true));
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int t;
            cin >> t;
            
            if (t % 2 == 1) {
                board[i][j] = !board[i][j];
                if (i - 1 >= 0) board[i - 1][j] = !board[i - 1][j];
                if (i + 1 <= 2) board[i + 1][j] = !board[i + 1][j];
                if (j - 1 >= 0) board[i][j - 1] = !board[i][j - 1];
                if (j + 1 <= 2) board[i][j + 1] = !board[i][j + 1];
            }
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    solve();
}
