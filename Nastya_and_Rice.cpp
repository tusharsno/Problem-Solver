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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int w_seeds1 = a - b;
        int w_seeds2 = a + b;

        int total_w1 = n * w_seeds1;
        int total_w2 = n * w_seeds2;

        int w_packet1 = c - d;
        int w_packet2 = c + d;

        if (w_packet1 > total_w2 || w_packet2 < total_w1)
            cout << "NO\n";
        //else if (w_packet2 == total_w1 || w_packet2 == total_w2)
            //cout << "YES\n";
        else
            cout << "YES\n";
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
