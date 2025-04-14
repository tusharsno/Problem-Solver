#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n,a,b;
    cin >> n >> a >> b;

    int pairs = n / 2;
    int singles = n % 2;

    int total_cost;

    if(b < 2*a) total_cost = pairs * b + singles * a;
    else total_cost = n * a;

    cout << total_cost << endl;
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
