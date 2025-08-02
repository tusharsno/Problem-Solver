#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void findCS(ll num) {
    for (ll i = 1; i*i*i <= num; i++) {
        ll r = num - i*i*i;

        ll k = cbrt(r);

        for (ll j = k-2; j <= k+2; j++) {
            if (j > 0 && j*j*j == r) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}


void solve() {
    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        findCS(x);
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



