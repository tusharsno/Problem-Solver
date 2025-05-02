#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        i_64 x, y;
        cin >> x >> y;

        i_64 a, b;
        cin >> a >> b;

        i_64 min_number = min(x, y);

        i_64 diff = abs(x - y);

        i_64 comb_cost = min(b, 2*a);

        i_64 total_cost = min_number * comb_cost + diff * a;
        cout << total_cost << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;
    //cin >> t;

    //while (t--) {
        solve();
    //}

    return 0;
}
