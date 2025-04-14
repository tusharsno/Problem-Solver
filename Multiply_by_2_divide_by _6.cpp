#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n;
    cin >> n;

    int mul = 0, div = 0;

    while(n != 1){
        if(n % 6 == 0){
            n /= 6;
            div++;
        }else if(n % 3 == 0){
            n *= 2;
            mul++;
        }else{
            cout << -1 << endl;
            return;
        }
    }
    cout << mul + div << endl;
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
