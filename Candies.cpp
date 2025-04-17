#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


//this function use to find out value of k:
int find_out_k(i_64 n){
    i_64 k = 2;
    while(true){
        i_64 val = (1 << k) - 1;
        if(n % val == 0) return k;
        k++;
    }
}


void solve() {
    int t;
    cin >> t;

    for(int i = 0;i < t;i++){
        i_64 n;
        cin >> n;

        int k = find_out_k(n);

        i_64 val = (1 << k) - 1;
        i_64 x = n / val;

        cout << x << endl;

        //for(int j = 0;j < n;j++){
            //i_64 x = pow(2, k);

            //if(n / x == 0) cout << x << endl;
        //}
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
