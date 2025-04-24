#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int t;
    cin >> t;

    int print = 0;

    for(int i = 0;i < t;i++){
        i_64 a,b,c;
        cin >> a >> b >> c;

        if((2*b - c) > 0 && (2*b - c) % a == 0) cout << "YES\n";
        else if((a+c) % (2*b) == 0) cout << "YES\n";
        else if((2*b - a) > 0 && (2*b - a) % c == 0) cout << "YES\n";
        else cout << "NO\n";
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
