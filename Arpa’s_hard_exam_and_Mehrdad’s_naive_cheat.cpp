#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return;
    }

    vector<int> cycle = {8, 4, 2, 6};

    cout << cycle[(n-1) % 4] << endl;

    //i_64 number = pow(1378, n);

    //i_64 last_digit = number % 10;

    //cout << last_digit << endl;
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
