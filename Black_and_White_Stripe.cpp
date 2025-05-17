#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    i_64 current_W = 0;
    for (i_64 i = 0; i < k; i++) {
        if (s[i] == 'W') current_W++;
    }

    i_64 min_W = current_W;


    //using sliding window concept:
    for (i_64 i = k; i < n; i++) {
        if (s[i - k] == 'W') current_W--;
        if (s[i] == 'W') current_W++;

        min_W = min(min_W, current_W);
    }

    cout << min_W << endl;

    //if (s.size() == n) {
        //i_64 count_B = 0;
        //i_64 max_B = 0;

        //if (s.size() == 1 && k == 1) {
            //if (s[0] == 'W') cout << 1 << endl;
        //}
        //for (i_64 i = 0; i < n; i++) {
            //if (s[i] == 'B') {
                //count_B++;
                //max_B = max(max_B, count_B);
            //} else {
                //count_B = 0;
            //}
        //}
        //cout << max_B << endl;

        //i_64 count = 0;

        //if (count_B >= k) {
            //cout << 0 << endl;
        //} else {
            //bool max_B = false;
            //while (max_B != k) {
                //if (max_B < k) {
                    //max_B++;
                    //count++;
                //}
            //}

            //cout << count << endl;
        //}
    //}
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
