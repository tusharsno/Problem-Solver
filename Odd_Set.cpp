#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<int> numbers(2*n);

    int count_odd = 0, count_even = 0;

    for (int i = 0; i < 2*n; i++) {
        cin >> numbers[i];

        if ((numbers[i]) % 2 != 0) {
            count_odd++;
        } else {
            count_even++;
        }
    }

    //sort(numbers.begin(), numbers.end());

    /*int count_odd = 0, count_even = 0;

    for (int j = 0; j < 2*n; j += 2) {
        if ((numbers[j]) % 2 != 0) {
            count_odd++;
        } else {
            count_even++;
        }
    }*/

    cout << (count_odd == count_even ? "YES\n" : "NO\n");
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
