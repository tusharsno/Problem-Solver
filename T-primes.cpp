#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;

/*
int low = ,high = ;

while(low <= high){
    int mid = (low + high) / 2;

    if(check(mid)){
        high = mid - 1;
    }else{
        low = mid + 1;
    }
}
*/

bool is_prime(i_64 n){
    if(n < 2) return false;

    for(i_64 i = 2;i * i <= n;i++){
        if(n % i == 0) return false;
    }

    return true;
}


void solve() {
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        i_64 x;
        cin >> x;

        i_64 root = sqrt(x);
        if(root *  root != x){
            cout << "NO\n";
            continue;
        }

        cout << (is_prime(root) ? "YES\n" : "NO\n");

        //int count = 0;
        //for(int j = 1;j <= x;j++){
            //if(x % j == 0) count++;
            //else continue;
        //}

        //if(count == 3){
            //cout << "YES\n";
        //}else cout << "NO\n";
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
