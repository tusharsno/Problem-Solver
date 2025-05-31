#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;




void solve() {
    i_64 n, m;
    cin >> n >> m;

    vector<i_64> dormitory;
    i_64 sum = 0;
    for (i_64 i = 0; i < n; i++) {
        i_64 a;
        cin >> a;

        sum += a;
        dormitory.push_back(sum);
    }

    i_64 i = 0;
    for (i_64 j = 0; j < m; j++) {
        i_64 b;
        cin >> b;

        while (b > dormitory[i]) {
            i++;
        }

        i_64 bed_number = (i == 0) ? b : b - dormitory[i - 1];

        cout << i + 1 << " " << bed_number << endl;
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
