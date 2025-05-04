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
        int a;
        cin >> a;

        //double n = 360 / (180 - a);
        int diff = 180 - a;

        cout << (diff > 0 && (360 % diff) == 0 ? "YES\n" : "NO\n");

        //cout << (n == (int)n ? "YES\n" : "NO\n");
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
