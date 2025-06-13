#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;


void solve() {
    ll t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        //string s = to_string(n);

        vector<ll> digits;
        for (char c : n) {
            int x = c - '0';
            digits.push_back(x);
        }

        bool hasZero = false;
        //ll hasZero = 0;
        for (int d : digits) {
            if (d == 0)
                hasZero = true;
        }

        if (!hasZero)
            cout << digits.size() - 1 << endl;
        else {
            int y = 0, z = 0;
            for (char c : n) {
                if (c == '0')
                    y++;
                else
                    z = max(z, y);
            }

            ll answer = digits.size() - (z + 1);
            cout << answer << endl;
        }
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
