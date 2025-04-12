#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n;
    cin >> n;

    //int new_n;

    if(n < 0){
        int op_1 = n / 10;
        int op_2 = (n / 100) * 10 + (n % 10);
        //int op_2 = (n / 10) + (n % 10);

        cout << max(op_1, op_2) << endl;

        //if((n%10 == 0)){
            //while(n%10 != 0){
                //new_n = n / 10;
            //}
        //}
    }else cout << n << endl;
    //cout << new_n << endl;
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
