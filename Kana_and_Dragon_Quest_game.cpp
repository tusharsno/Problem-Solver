#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    while (t--) {
        int x, n, m;           // n = Void absorption
        cin >> x >> n >> m;    // m = Lightning Strikes

        while (x > 0 && (n > 0 || m > 0)) {
            if (x >= 20 && n > 0) {
                x = (x / 2) + 10;
                n--;
            } else if (m > 0) {
                x -= 10;
                m--;
            } else
                break;
        }

        cout << (x <= 0 ?  "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while (t--) {
        solve();
    // }

    return 0;
}



