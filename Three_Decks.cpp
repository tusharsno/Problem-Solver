#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    for(int i = 0;i < t;i++){
        int a, b, c;
        cin >> a >> b >> c;

        int check = (a + b + c) / 3;

        cout << ((a+b+c) % 3 == 0 && a <= check && b <= check && c >= (check - a) + (check - b)? "YES\n" : "NO\n");
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
