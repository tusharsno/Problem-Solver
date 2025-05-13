#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 a, b, n;
    cin >> a >> b >> n;

    vector<i_64> tools(n);

    for (i_64 i = 0; i < n; i++) cin >> tools[i];

    i_64 d = 0;
    for  (auto x : tools) d += min(x, a - 1);

    cout << b + d << endl;


    //sort(tools.begin(), tools.end());
    //reverse(tools.begin(), tools.end());
    //sort(tools.begin(), tools.end(), greater<i_64>());

    //i_64 time = 0, timer = b;
    //int idx = 0;

    //while (timer > 0) {
        //if (timer == 1 && idx < n) {
            //timer = min(timer + tools[idx], a);
            //idx++;
        //}

        //timer--;
        //time++;
    //}

    //cout << time << endl;
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
