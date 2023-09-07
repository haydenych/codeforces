#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> board(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == '.') {
                if ((i + j) % 2 == 1) {
                    cout << 'B';
                } else {
                    cout << 'W';
                }
            } else {
                cout << '-';
            }
        }
        cout << endl;
    }
}

void solve_bfs_on9() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> board(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    
    queue<pair<pair<int, int>, int>> q;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] != '.') {
                continue;
            }
            
            q.push(make_pair(make_pair(i, j), 'B'));
            while (!q.empty()) {
                pair<pair<int, int>, int> c = q.front();
                int a = c.first.first;
                int b = c.first.second;
                bool black = c.second == 'B';

                q.pop();

                board[a][b] = c.second;
                if (a - 1 >= 0 && board[a - 1][b] == '.') q.push(make_pair(make_pair(a - 1, b), (black ? 'W' : 'B')));
                if (a + 1 <= n - 1 && board[a + 1][b] == '.') q.push(make_pair(make_pair(a + 1, b), (black ? 'W' : 'B')));
                if (b - 1 >= 0 && board[a][b - 1] == '.') q.push(make_pair(make_pair(a, b - 1), (black ? 'W' : 'B')));
                if (b + 1 <= n - 1 && board[a][b + 1] == '.') q.push(make_pair(make_pair(a, b + 1), (black ? 'W' : 'B')));
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    solve();
}
