#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, m;
    cin >> n >> m;

    vector<i_64> numbers(n);

    for (i_64 i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<i_64> result(n);
    unordered_set<i_64> seen;

    for (i_64 i = n - 1; i >= 0; i--) {
        seen.insert(numbers[i]);
        result[i] = seen.size();
    }

    while (m--) {
        i_64 l;
        cin >> l;

        cout << result[l - 1] << endl;
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
