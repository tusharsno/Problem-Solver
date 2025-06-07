#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    vector<int> digits(n);

    for (int i = 0; i < n; i++) cin >> digits[i];

    int count_zeros = 0, count_ones = 0;
    for (int d : digits) {
        if (d == 0)
            count_zeros++;
        else
            count_ones++;
    }

    vector<int> sub_digits(n);
    for (int j = 0; j < n; j++)
        sub_digits[j] = (digits[j] == 0 ? 1 : -1);

    int max_ones = INT_MIN;
    int current_ones = 0;
    for (int j = 0; j < n; j++) {
        current_ones = max(sub_digits[j], current_ones + sub_digits[j]);
        max_ones = max(max_ones, current_ones);
    }

    cout << (max_ones <= 0 ? count_ones - 1 : count_ones + max_ones) << endl;
}

//Input
//8
//1 0 0 0 1 0 0 0
//Output
//4
//Answer
//7

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
