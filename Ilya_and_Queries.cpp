#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    string s;
    cin >> s;

    i_64 m;
    cin >> m;

    i_64 n = s.size();

    vector<i_64> prefix(n, 0);

    for (i_64 i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }

    for (i_64 i = 0; i < m; i++) {
        i_64 l, r;
        cin >> l >> r;

        //i_64 count = 0;
        //ans = prefix[r - 1] - prefix[l - 1];

        //for (i_64 j = l - 1; j < r - 1; j++) {
            //if (s[j] == s[j+1]) count++;
        //}
        cout << prefix[r - 1] - prefix[l - 1] << endl;
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
