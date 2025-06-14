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
        ll s;
        cin >> s;

        ll spent = 0;
        while (s >= 10) {
            spent += (s - s % 10);
            s = s % 10 + (s / 10);
        }

        spent += s;
        cout << spent << endl;
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
