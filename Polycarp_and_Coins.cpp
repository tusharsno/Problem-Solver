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
        i_64 n;
        cin >> n;

        i_64 x = n / 3;
        i_64 y = n % 3;

        i_64 c1, c2;

        if(y == 0){
            c1 = x;
            c2 = x;
        }else if(y == 1){
            c1 = x + 1;
            c2 = x;
        }else{
            c1 = x;
            c2 = x + 1;
        }

        cout << c1 << " " << c2 << endl;
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
