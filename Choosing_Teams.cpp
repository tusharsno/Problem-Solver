#include <bits/stdc++.h>
using namespace std;

using i_64 = long long;
using u_64 = unsigned long long;
using u_32 = unsigned;
using u_128 = unsigned __int128;


void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> numbers(n);

    for(int i = 0;i < n;i++){
        cin >> numbers[i];
    }

    int count = 0;
    for(int j = 0;j < n;j++){
        if(numbers[j] <= 5-k) count++;
    }

    cout << count / 3 << endl;
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
