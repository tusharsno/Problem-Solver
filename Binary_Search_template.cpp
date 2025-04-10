#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int low = 0, high = 20;

    while(low <= high){
        int mid = (low + high) / 2;

        if(check(mid))
            high = mid - 1;
        else
            low = mid + 1;
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
