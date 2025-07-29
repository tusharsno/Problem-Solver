#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;


void solve() {
    int n, k;
    cin >> n >> k;

    int have_time = 240 - k;

    int total_time = 0;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        total_time += 5 * i;

        if (total_time <= have_time) {
            count++;
        } else break;
    }

    cout << count << endl;
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



