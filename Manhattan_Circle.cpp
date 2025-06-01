#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, m;
    cin >> n >> m;

    //i_64 max_count = 0;
    string initial_s = "";

    i_64 row = -1, col = -1;
    //i_64 max_h = 0;

    for (i_64 i = 0; i < n; i++) {
        string s = "";
        i_64 first = -1, last = -1;

        for (i_64 j = 0; j < m; j++) {
            char a;
            cin >> a;

            if (a == '#') {
                s += '#';

                if (first == -1) first = j;
                last = j;
            }
        }

        if (s.size() > initial_s.size()) {
            initial_s = s;
            row = i + 1;
            col = (first + last) / 2 + 1;
        }
    }

    cout << row << " " << col << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
