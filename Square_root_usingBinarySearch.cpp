#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


int sqrt_binary(int x){
    int low = 0,high = x,ans = 0;

    while(low <= high){
        int mid = (low + high) / 2;

        if(1LL * mid * mid <= x){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}


void solve() {
    int x;
    cin >> x;

    cout << sqrt_binary(x) << endl;
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

