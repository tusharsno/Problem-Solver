#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> oranges(n);
    for (int i = 0; i < n; i++) cin >> oranges[i];

    int wastes = 0;
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (oranges[j] <= b) {
            wastes += oranges[j];

            if (wastes > d) {
                count++;

                wastes = 0;
            }
        } else j++;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
