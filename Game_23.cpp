#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout  << -1 << endl;
        return;
    }

    i_64 count_steps = 0;
    i_64 r = m / n;

    while (r % 2 == 0) {
        r /= 2;

        count_steps++;
    }

    while (r % 3 == 0) {
        r /= 3;

        count_steps++;
    }

    cout << (r != 1 ? -1 : count_steps) << endl;
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
