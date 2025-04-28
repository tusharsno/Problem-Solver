#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, m;
    cin >> n >> m;

    //int result = 0;
    //int count = 0;

    //int steps = n / 2;
    //if (n % 2 != 0) steps++;

    int steps = (n % 2 == 0) ? n/2 : (n/2) + 1;

    while(steps % m != 0){
        steps++;

        if(steps > n){
            cout << -1 << endl;
            return;
        }
    }
    cout << steps << endl;
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
