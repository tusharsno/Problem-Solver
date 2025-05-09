#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

bool prime_number(int k) {
    if(k <= 1) return false;
    if (k == 2) return true;
    if (k % 2 == 0) return false;

    for (int i = 3; i * i <= k; i += 2) {
        if (k % i == 0) return false;
    }

    return true;
}


void solve() {
    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while (!prime_number(next)) {
        next++;
    }

    cout << (next == m ? "YES\n" : "NO\n");
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
