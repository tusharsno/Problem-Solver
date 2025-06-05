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

    for (i_64 j = 0; j < n; j++) {
        i_64 min_d, max_d;

        if (j == 0) {
            min_d = abs(numbers[1] - numbers[0]);
            max_d = abs(numbers[n-1] - numbers[0]);
        } else if (j == n-1) {
            min_d = abs(numbers[n-1] - numbers[n-2]);
            max_d = abs(numbers[n-1] - numbers[0]);
        } else {
            min_d = min(abs(numbers[j] - numbers[j-1]), abs(numbers[j+1] - numbers[j]));
            max_d = max(abs(numbers[j] - numbers[0]), abs(numbers[n-1] - numbers[j]));
        }

        cout << min_d << " " << max_d << endl;
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

