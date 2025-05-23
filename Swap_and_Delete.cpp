#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        i_64 zero_count = 0, one_count = 0;
        for (i_64 i = 0;i < s.size(); i++) {
            if (s[i] == '0') zero_count++;
            else one_count++;
        }

        i_64 prefix_zeros = 0;
        i_64 max_k = 0;
        for (i_64 j = 0; j < s.size(); j++) {
            if (s[j] == '0') prefix_zeros++;

            i_64 prefix_ones = (j + 1) - prefix_zeros;

            if (prefix_zeros <= one_count && prefix_ones <= zero_count)
                max_k = j + 1;
        }

        cout << s.size() - max_k << endl;

        //i_64 pairs = min(zero_count, one_count);

        //i_64 ans = s.size() - 2 * pairs;
        //cout << ans << endl;
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
