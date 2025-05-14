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

    i_64 j = n - 1;
    while (j > 0 && numbers[j-1] >= numbers[j]) j--;

    while (j > 0 && numbers[j-1] <= numbers[j]) j--;

    cout << j << endl;

    //reverse(numbers.begin(), numbers.end());

    //i_64 idx_last = 0;
    //for (i_64 j = 1; j < n; j++) if (numbers[j - 1] <= numbers[j]) idx_last++;

    //i_64 find_idx_L = n - idx_last;

    //reverse(numbers.begin(), numbers.end());
    //i_64 idx_first = 0;
    //for (i_64 j = 1; j < n; j++) if (numbers[j - 1] <= numbers[j]) idx_first++;

    //i_64 find_idx_F = idx_first;

    //cout << count << endl;
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
