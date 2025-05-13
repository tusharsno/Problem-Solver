#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> players(m + 1);

    for (int i = 0; i < m + 1; i++) cin >> players[i];
        //int x;
        //cin >> x;

        //players.push_back(x);
    //}

    //auto fedor = players[m];
    bitset<20> fedor(players[m]);

    int count = 0;
    for (int j = 0; j < m; j++) {
        //auto player = players[j];
        bitset<20> others(players[j]);

        bitset<20> diff = fedor ^ others;

        //auto XOR =  binary ^ binary;

        //int dif = abs(players[m] - players[j]);
        int bit_diff = __builtin_popcount(diff.to_ullong());

        if (bit_diff <= k) count++;
    }

    cout << count << endl;
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
