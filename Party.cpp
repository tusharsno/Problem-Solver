#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

vector<int> manager;
vector<int> dp;

int depth (int i) {
    if (dp[i] != 0) return dp[i];
    if (manager[i] == -1) return dp[i] = 1;
    return dp[i] = 1 + depth(manager[i] - 1);
}


void solve() {
    int n;
    cin >> n;

    //vector<int> numbers;
    manager.resize(n);
    dp.assign(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> manager[i];
    }

    int max_depth = 0;
    for (int i = 0; i < n; i++) {
        max_depth = max(max_depth, depth(i));
    }

    cout << max_depth << endl;
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
