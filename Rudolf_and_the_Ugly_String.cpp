#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

ll countSubString(string s) {
    ll count = 0;
    ll n = s.size();

    for (ll i = 0; i <= n - 3;) {
        string sub1 = s.substr(i, 5);
        string sub2 = s.substr(i, 3);

        if (i <= n - 5 && sub1 == "mapie") {
            count++;
            i += 4;
        } else if (sub2 == "map" || sub2 == "pie") {
            count++;
            i += 2;
        } else i++;
    }

    return count;
}


void solve() {
    ll n;
    cin >> n;

    string str;
    cin >> str;

    cout << countSubString(str) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}



