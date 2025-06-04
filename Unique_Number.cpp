#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        //int sum = 0;
        //vector<int> number;

        if (x < 10)
            cout << x << endl;
        else if (x > 45)
            cout << -1 << endl;
        else {
            vector<int> digits;
            for (int i = 9; i >= 1; i--) {
                if (i <= x) {
                    digits.push_back(i);
                    x -= i;
                }
            }

            sort(digits.begin(), digits.end());

            for (int el : digits) cout << el;
            cout << endl;
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
