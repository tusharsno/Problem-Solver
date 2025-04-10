#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;

void solve() {
    i_64 n,k;
    cin >> n >> k;

    //vector<int> numbers;

    i_64 low = 1, high = 2e18;
    i_64 result = 0;

    while(low <= high){
        i_64 mid = (low + high) / 2;

        //i_64 not_divisible = mid - mid/n;
        if(mid - mid/n >= k){
            result = mid;
            high = mid - 1;
        }else low = mid + 1;
    }
    cout << result << endl;
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

