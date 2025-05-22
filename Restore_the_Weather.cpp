#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, k;
    cin >> n >> k;

    vector<i_64> numbers_a(n);
    vector<i_64> numbers_b(n);

    for (i_64 i = 0; i < n; i++) cin >> numbers_a[i];
    for (i_64 i = 0; i < n; i++) cin >> numbers_b[i];

    vector<pair<i_64, i_64>> numbers_a_new(n);
    for (i_64 j = 0; j < n; j++) {
        numbers_a_new[j] = {numbers_a[j], j};
    }

    sort(numbers_a_new.begin(), numbers_a_new.end());
    sort(numbers_b.begin(), numbers_b.end());

    vector<i_64> numbers_b_new(n);
    for (i_64 j = 0; j < n; j++) {
        i_64 original_idx = numbers_a_new[j].second;
        numbers_b_new[original_idx] = numbers_b[j];
    }

    for (i_64 num : numbers_b_new) cout << num << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i_64 t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
