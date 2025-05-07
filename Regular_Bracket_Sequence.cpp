#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.size() % 2 != 0) cout << "NO\n";

        if (s.front() == ')' || s.back() == '(') {
            cout << "NO\n";
            continue;
        }

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
