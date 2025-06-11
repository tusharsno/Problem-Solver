#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;


void solve() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << " " << 0 << endl;
        else {
            ll d = abs(a - b);
            ll total_op = min(a % d, d - (a % d));

            cout << d << " " << total_op << endl;
        }
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
