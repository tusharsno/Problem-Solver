#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    int level = 1;
    int used = 0;
    int level_sum = 0;

    while(true){
        level_sum = level * (level + 1) / 2;

        if(used + level_sum > n) break;

        used += level_sum;
        level++;
    }
    cout << level - 1 << endl;
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
