#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int a, b;
    cin >> a >> b;

    int c1 = max(a * 2, b);
    int c2 = max(a, b * 2);
    int c3 = max(a + b, max(a, b));
    int s = min({c1, c2, c3});

    int A = s * s;
    cout << A << endl;
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
