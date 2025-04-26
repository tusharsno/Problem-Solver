#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int a, b;           // a => number of candles
    cin >>  a >> b;

    int result = a;     // 4

    while(a / b != 0){
        result += a / b;

        a /= b;

        a += a/b;
    }
    cout << result << endl;
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
