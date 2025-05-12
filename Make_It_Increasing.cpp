#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<i_64> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    i_64 count = 0;

    for (int i = 0; i < numbers.size(); i++) {
        while (numbers[i] % 2 == 0) {
            numbers[i] = numbers[i] / 2;
            count++;
        }
    }

    cout << (count > 1 ? count : -1) << endl;
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
