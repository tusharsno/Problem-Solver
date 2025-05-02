#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, x;
    cin >> n >> x;

    i_64 count = 0;

    for (int i = 1; i <= n; i++) {
        if (x % i == 0){
            i_64 j = x / i;

            if (j <= n) count++;
        }
    }

    //for (int i = 1; i <= n; i++) {
        //for (int j = 1; j <= n; j++) {
            //i_64 a = i * j;

            //if (a == x) count++;
        //}
    //}
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
