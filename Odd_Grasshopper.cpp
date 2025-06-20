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
        ll x, n;
        cin >> x >> n;

        //ll q = n / 4;
        ll r = n % 4;

        ll result;
        if (x % 2 == 0) {
            //c += 2 * q;

            if (r == 0) result == x;
            else if (r == 1) result = x - n;
            else if (r == 2) result = x + 1;
            else result = x + n + 1;
        } else {
            //c -= 2 * q;

            if (r == 0) result == x;
            else if (r == 1) result = x + n;
            else if (r == 2) result = x - 1;
            else result = x - n - 1;
        }

        cout << result << endl;
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
