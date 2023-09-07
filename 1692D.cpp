#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define ld long double

using namespace std;

int timeStringToInt(string s) {
    int res = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
    return res;
}

string timeIntToString(int t) {
    int hour = t / 60;
    int min = t % 60;
    
    string res = "";
    if (hour < 10) res += "0";
    res += to_string(hour);
    res += ":";
    if (min < 10) res += "0";
    res += to_string(min);
    return res;
}

void solve() {
    // 0-5 10-15 20-23
    string s;
    int x;
    cin >> s >> x;
    
    int f = timeStringToInt(s);
    vector<int> t = {f};
    while ((f + x) % 1440 != t[0]) {
        t.push_back((f + x) % 1440);
        f = (f + x) % 1440;
    }
    
    int res = 0;
    for (int i = 0; i < t.size(); ++i) {
        string c = timeIntToString(t[i]);
        if (c[0] == c[4] && c[1] == c[3]) {
            ++res;
        }
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)  solve();
}
