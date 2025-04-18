#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n,m;        //n => number of pairs of socks
    cin >> n >> m;  //m => number of day

    int socks = n;
    int days = 0;

    while(socks > 0){
        socks--;
        days++;

        if(days % m == 0) socks++;
    }

    cout << days << endl;
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
