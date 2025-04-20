#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {         //n -> m:
    int n,m;           //red =>  n -> 2n
    cin >> n >> m;     //blue => n -> n-1

    int count = 0;

    while(n < m){
        if(m % 2 == 0) m /= 2;
        else m += 1;

        count++;
    }

    count += (n - m);

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
