#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, m;
    cin >> n >> m;

    vector<vector<i_64>> numbers(n, vector<i_64>(m));

    for (i_64 i = 0; i < n; i++) {
        for (i_64 j = 0; j < m; j++) {
            cin >> numbers[i][j];
        }
    }

    i_64 result = 0;
    for (i_64 i = 0; i < m; i++) {
        vector<i_64> new_numbers(n);
        for (i_64 j = 0; j < n; j++) {
            new_numbers[j] = numbers[j][i];

            //i_64 diff = 0;
            //for (i_64 k = 0; k < m; k++) {
                //diff += abs(numbers[i][k] - numbers[j][k]);
            //}
            //result += diff;
        }

        sort(new_numbers.begin(), new_numbers.end());

        i_64 prefix_sum= 0;
        for (i_64 i = 0; i < n; i++) {
            result += new_numbers[i] * i - prefix_sum;
            prefix_sum += new_numbers[i];
        }
    }
    cout << result << endl;
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
