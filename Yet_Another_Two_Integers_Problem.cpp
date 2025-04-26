#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 t;
    cin >> t;

    for(int i = 0;i < t;i++){
        i_64 a, b;
        cin >> a >> b;

        i_64 diff = abs(a-b);

        i_64 result = (diff / 10) + (diff % 10 != 0);

        cout << result << endl;
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
