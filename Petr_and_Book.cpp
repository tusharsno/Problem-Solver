#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<int> pages(7);
    for (int i = 0; i < 7; i++) {
        cin >> pages[i];
    }

    int sum = 0;
    for (int j = 0; ; j++) {
        sum += pages[j % 7];

        if (sum >= n) {
            int result = (j % 7) + 1;

            cout << (result == 0 ? 7 : result) << endl;
            break;
        }
    }
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
