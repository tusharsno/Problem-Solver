#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    i_64 n, q;
    cin >> n >> q;

    vector<i_64> arr;

    for(int i = 0;i < n;i++){
        i_64 a;
        cin >> a;

        arr.push_back(a);
    }

    vector<i_64> prefix(n);
    prefix[0] = arr[0];

    for(int i = 1;i < n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    i_64 total_sum = prefix[n-1];

    //for(int el : arr){
        //total_sum += el;
    //}

    i_64 l, r, k;
    for(int i = 0;i < q;i++){
        cin >> l >> r >> k;

        i_64 range_sum = prefix[r-1];
        if(l > 1) range_sum -= prefix[l-2];

        //for(int j = l-1;j <= r-1;j++){
            //range_sum += arr[j];
        //}

        i_64 new_total = total_sum - range_sum + (r-l+1) * k;

        cout << (new_total % 2 != 0 ? "YES\n" : "NO\n");
    }
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
