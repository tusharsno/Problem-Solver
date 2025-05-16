#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    vector<i_64> numbers(n);

    for (i_64 i = 0; i < n; i++) cin >> numbers[i];

    sort(numbers.begin(), numbers.end());

    bool cf = false;
    for (i_64 i = 0; i < n - 2; i++) {
        if (numbers[i] + numbers[i+1] > numbers[i+2]) {
            cf = true;
            break;
        }
    }

    cout << (cf ? "YES\n" : "NO\n");
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
